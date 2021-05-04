#ifndef EXAMPLEPROJECT_CPU_H
#define EXAMPLEPROJECT_CPU_H

#include <string>

using namespace std;

class Cpu {
public:
    Cpu();
    void initialize();
    void loadGame(string name);
    int run();
private:
    unsigned short opcode;
    unsigned char memory[4096];
    unsigned char vregister[16];
    unsigned short iregister;
    unsigned short pc;
    unsigned char gfx[64*32];
    unsigned char delayTimer;
    unsigned char soundTime;
    unsigned short stack[16];
    unsigned short sp;
    unsigned char key[16];
};

#endif //EXAMPLEPROJECT_CPU_H