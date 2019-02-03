#include "core.h"

Core::Core()
{

}

Core::~Core()
{

}

void Core::init()
{
    arch = new Arch(ARCH_LIST::ARCH_ARMV6M);

    // Memory init
        // Allocate memory.
    // Register init
        // Set PC to 0
        // Init MSP by data in memory 
        // Init PC to 0x4(Where reset handler exist)
        // Jump to reset handler
    // Goto loop now!
}

void Core::loop()
{
    while(1)
    {
        unsigned int status;

        arch->loop();
    }
}