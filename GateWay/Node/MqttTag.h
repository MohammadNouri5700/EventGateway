//
// Created by aziz on 08.10.21.
//

#ifndef EVENT_MANAGER_MQTTTAG_H
#define EVENT_MANAGER_MQTTTAG_H

#include "Tag.h"
#include "../Connection/ConnectionMqtt.h"
namespace ProtocolS
{
class MqttTag : public Tag
{
protected:
    void SendEvent() override;
public:
    strTag Topic;
    strTag Prefix;
    ClientActions clientAction;
    //strTag MessageType;
    void Print() override;

    void UpdateValue() override;

    ~MqttTag() override;

    int GetType() override;

    void setSubject(Protocol *subject) override;

    MqttTag(xmlMqtt* mqtt);
};

}


#endif //EVENT_MANAGER_MQTTTAG_H
