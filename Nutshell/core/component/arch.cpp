#include "arch.h"

#include "../../arch/ARMv6M/armv6m.h"

Arch::Arch(ARCH_LIST arch)
{
    init(arch);
}

Arch::~Arch()
{
}

void Arch::init(ARCH_LIST arch)
{
    switch (arch)
    {
        case ARCH_LIST::ARCH_ARMV6M:
            break;
        default:
            break;
    }
}

void Arch::loop()
{
    
}