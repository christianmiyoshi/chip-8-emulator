#include "cpu.h"
#include <string>
using namespace std;

Cpu::Cpu(){
    this->opcode = 0;
    //this->memory[4096];
    //this->vregister[16];
    this->iregister = 0;
    this->pc = 0;
    //this->gfx[64*32];
    this->delayTimer = 0;
    this->soundTime = 0;
    //this->stack[16];
    this->sp = 0;
    //this->key[16];
}

void Cpu::initialize(){

}

void Cpu::loadGame(string name){

}

int Cpu::run()
{
    return 0;
}