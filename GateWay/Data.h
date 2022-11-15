//
// Created by aziz on 21.09.21.
//

#ifndef EVENT_MANAGER_DATA_H
#define EVENT_MANAGER_DATA_H
#include <string>
#include <sstream>
#include "../ErrorManager/Error.h"
#include "Node/Tag.h"
#include "../Entity/JsonMessage.h"

struct Data {
    virtual std::string GetString()=0;
    void* data;

    virtual ~Data() {};
};



struct ProtocolData : public Data {
    std::string stringData;
    ProtocolData(const std::string &stringData, void *data_) : stringData(stringData) {
        data = data_;
    }

    virtual ~ProtocolData() { }

    std::string GetString() override
    {
        return stringData;
    }
};

struct ErrorData : public Data {
    ERROR::Error errData;

    ErrorData(const ERROR::Error &errData) : errData(errData) {}

    virtual ~ErrorData() { }

    std::string GetString() override
    {
        std::stringstream ss;
        ss << errData;
        return ss.str();
    }
};
struct Command : public Data {

};

struct TagData : public Data {

    ProtocolS::Tag *tag_;

    TagData(ProtocolS::Tag *tag) : tag_(tag) {}
    virtual ~TagData() {}
    TagData(const TagData&) = delete;
    TagData operator=(const TagData&) = delete;

    std::string GetString() override
    {
        return tag_->strGetName();
    };
};

struct EntityData : public Data {

    JsonMessage *JsonM_;

    EntityData(JsonMessage *jsonM) : JsonM_(jsonM) {}
    virtual ~EntityData() {}
    EntityData(const EntityData&) = delete;
    EntityData operator=(const EntityData&) = delete;

    std::string GetString() override
    {
        return "json";
    };
};


struct jsonData : public Data {

    nlohmann::json *Json;
    jsonData(nlohmann::json *json) : Json(json) {}
    virtual ~jsonData() {}
    jsonData(const jsonData&) = delete;
    jsonData operator=(const jsonData&) = delete;

    std::string GetString() override
    {
        return to_string(*Json);
    };
};

#endif //EVENT_MANAGER_DATA_H



