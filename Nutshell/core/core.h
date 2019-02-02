#pragma once

#include "../arch/ARMv6-M/arch.h"

class Core
{
public:
    Core();
    ~Core();

    void init();
    void loop();

private:
    Arch * arch;
};