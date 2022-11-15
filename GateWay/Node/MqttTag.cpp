//
// Created by aziz on 08.10.21.
//

#include "MqttTag.h"
#include "../../Protocols/SubscriberProtocol.h"
#include "../GateWay/ConvertS/Convert.h"
#include "../Event.h"
#include "../GateWay/Node/NodeList.h"

extern std::queue<Event> EventList;;
using subMqtt = ProtocolS::Mqtt::SubscriberProtocol;
extern std::vector<Convert> ConvertS;

int data;
void ProtocolS::MqttTag::SendEvent()
{
    Event b;
    std::string *str = new std::string((char *)Value);
    data = atoi((char *)Value);
    std::cout << "Sub value : " << *str <<std::endl;
    Event e{new ProtocolData{*str, nullptr}, TYPE::PRINT};
    for (auto p : ConvertS)
    {
        // std::cout << "Convert Source :" << p.source() << std::endl;
        // std::cout << "Convert Dest :" << p.distS()[0].c_str() << std::endl;
        if (p.source() == this->Name.Value)
        {
            
            auto t = findTag(p.distS()[0]);
            switch (t->conn->IProtocol)
            {
            case ProtocolIIOT::MQTT:
                b = Event(new ProtocolData{*str, &data}, TYPE::MQTT, t);
                EventList.push(std::move(b));
                break;
            case ProtocolIIOT::S7:
                b = Event(new ProtocolData{*str, &data}, TYPE::S7, t);
                EventList.push(std::move(b));
                break;
            case ProtocolIIOT::MODBUS:
                b = Event(new ProtocolData{*str, &data}, TYPE::MODBUS, t);
                EventList.push(std::move(b));
                break;
            default:
                break;
            }
        }
    }
    // EventList.push_back(std::move(e));
}

void ProtocolS::MqttTag::Print()
{
    Tag::Print();
    std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
    std::cout << "Topic : " << Topic.Value << '\n'
              << "Prefix : " << Prefix.Value << '\n'
              << "Action : " << clientAction << '\n';
}

void ProtocolS::MqttTag::setSubject(ProtocolS::Protocol *subject)
{
    Tag::setSubject(subject);
    std::cout << "clientAction"<< clientAction << std::endl;
    if (clientAction == ClientActions::SUB)
        reinterpret_cast<subMqtt *>(subject)->SetTopic(Topic.Value, 0);
}

ProtocolS::MqttTag::MqttTag(xmlMqtt *mqtt) : Tag(mqtt),
    Topic(mqtt->Topic), Prefix(mqtt->Prefix) ,clientAction(mqtt->clientAction) {}

void ProtocolS::MqttTag::UpdateValue()
{
    Tag::UpdateValue();
}

ProtocolS::MqttTag::~MqttTag()
{

}

int ProtocolS::MqttTag::GetType()
{
    return 9;
}

