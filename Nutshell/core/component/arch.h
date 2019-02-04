#pragma once

enum class ARCH_LIST 
{
    ARCH_ARMV6M = 0,

    ARCH_MAX,
};

class Arch
{
public:
    Arch(ARCH_LIST arch);
    ~Arch();

    void init(ARCH_LIST arch);
    void loop();
private:
};