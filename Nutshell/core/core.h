#pragma once

#include "component/arch.h"

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