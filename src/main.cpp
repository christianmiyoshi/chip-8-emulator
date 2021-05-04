#include <iostream>
#include "cpu.h"

int main() {
    Cpu* cpu = new Cpu();
    return cpu->run();
}