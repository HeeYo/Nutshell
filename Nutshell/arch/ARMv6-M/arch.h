#pragma once

class Arch
{
public:
    Arch(/* args */);
    ~Arch();

    void init();
    void loop();

    void decode();
    void read_instruction();
    
    unsigned int getStatus();
private:
    unsigned int nStatusCode;
};