!#/bin/bash
gcc -fPIC *.c -shared -o liball.so | rm *.o
