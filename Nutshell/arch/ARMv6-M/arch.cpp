#include "arch.h"

Arch::Arch(/* args */)
{
}

Arch::~Arch()
{
}

void Arch::init()
{
    
}

void Arch::loop()
{
    decode();
}

void Arch::decode()
{
    read_instruction();
}

unsigned int Arch::read_instruction()
{
    // TODO
    return 0;
}

unsigned int Arch::getStatus()
{
    return nStatusCode;
}