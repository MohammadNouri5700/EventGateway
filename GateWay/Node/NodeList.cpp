//
// Created by aziz on 03.10.21.
//

#include "NodeList.h"
#include "Tag.h"
extern ProtocolS::NodeList nodeList;
extern std::vector<Connection *> ConnectionS;
ProtocolS::Tag *findTag(std::string name)
{
    for (auto p : nodeList)
    {
        for (auto n : p.second)
            if (strcmp(n->Name.Value.c_str(), name.c_str()) == 0)
                return n;
    }
    std::cout << "2Dest Type :" << name.c_str()
              << "Not Found" << std::endl;

    return nullptr;
}

ProtocolIIOT findTagType(std::string name)
{
    for (auto p : nodeList)
        for (auto n : p.second)
            if (strcmp(n->Name.Value.c_str(), name.c_str()) == 0)
                return n->conn->IProtocol;
    std::cout << "1Dest Type :"
              << "Not Found" << std::endl;
    return ProtocolIIOT::ERR;
}

Connection *findConnection(std::string name)
{
    for (auto p : ConnectionS)
    {
            if (strcmp(p->Name.Value.c_str(), name.c_str()) == 0)
            {
                std::cout << "Dest  :" << p->Address.Value.c_str() << std::endl;
                return p;
            }
    }
    std::cout << "3Dest Type :" <<  name.c_str()
              << "Not Found" << std::endl;
    return nullptr;
}
