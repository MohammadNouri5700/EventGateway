//
// Created by aziz on 04.12.21.
//

#include "EventHandler.h"

extern std::mutex end_mutex;

GateWay::EVENT::HANDLER::EventHandler::EventHandler()
{
}

GateWay::EVENT::HANDLER::EventHandler::~EventHandler()
{
}
auto as_integer(TYPE const value)
    -> typename std::underlying_type<TYPE>::type
{
    return static_cast<typename std::underlying_type<TYPE>::type>(value);
}

void GateWay::EVENT::HANDLER::EventHandler::Act()
{
    std::cout << "void GateWay::EVENT::HANDLER::EventHandler::Act()" << std::endl;
    auto free_b = [this]()
    {
        size_t i = 0;
        while (!EventList.was_empty())
        {
            auto it = EventList.pop();
            auto e = it;
            TYPE t = e.type;
            std::cout << "main switch" << (int)t << "***" << EventList.was_size ()<< "\n";
            switch (t)
            {
            case TYPE::MQTT:
                std::cout << "free_b TYPE::MQTT" << std::endl;
                e.SetSignal(MqttCB01);
                break;
            case TYPE::MODBUS:
                e.SetSignal(ModbusCB01);
                break;
            case TYPE::S7:
                e.SetSignal(S7CB01);
                break;
            case TYPE::PRINT:
                e.SetSignal(PrintCB01);
                break;
            case TYPE::MQTTNODE:
                e.SetSignal(MqttCB02);
                break;
            case TYPE::UPDATE:
                e.SetSignal(Updater);
                break;
            // case TYPE::WIFI_SCAN:
            //     e.SetSignal(Wifi_scan);
            //     break;
            // case TYPE::WIFI_CON:
            //     e.SetSignal(wifi_Connect);
            //     break;
            case TYPE::ERROR:
            {
                /*e.SetSignal(PrintCB01);
                e.SetSignal(Notyfy01);
                e.SetSignal(message01);*/
            }
            break;
            default:
                break;
            }
           
            if (TYPE::ERROR == e.type)
            {
                e.SetSignal(PrintCB01);
                e.SetSignal(Notyfy01);
            }
            if(e.type == TYPE::MQTTNODE)
                PoolEvent.Post(std::bind([](Event e)
                                        { e.RunNode(); },
                                        e));
            else
                PoolEvent.Post(std::bind([](Event e)
                                        { e.Run(); },
                                        e));
        }
    };

    PoolQueue.Post(free_b);
    Caller.push_task("re", 1s, free_b);

    Caller.run();
    PoolEvent.Wait();
    PoolQueue.Wait();
}
