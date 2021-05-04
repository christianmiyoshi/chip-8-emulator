Based on https://multigesture.net/articles/how-to-write-an-emulator-chip-8-interpreter/

git submodule init

mkdir build

cd build

cmake .. -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles" -DCMAKE_CXX_COMPILER=g++

make all