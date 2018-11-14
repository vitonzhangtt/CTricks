#include <string.h>
#include <stdio.h>
/**
1. compile source 
$ clang strlenX.c -o strlenX

2. enable generation of core dump file
$ ulimit -c unlimited 

3. lldb strlenX /cores/core.XXX
./strlenX 
A core dump file will generated at /cores

*/

int main(int argc, char * argv[]) {
    printf("Before strlen() ...\n");
    int nullLen = strlen(NULL);
    printf("After strlen() ...\n");
}


