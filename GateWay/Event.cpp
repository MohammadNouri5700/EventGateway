//
// Created by aziz on 21.09.21.
//

#include "Event.h"

void Event::SetSignal(const FunctionType &f)
{
    aSignal->connect(f);
}

void Event::SetSignal(const FunctionTypeNode &f)
{
    nSignal->connect(f);
}
