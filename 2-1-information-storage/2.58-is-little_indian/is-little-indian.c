#include <stdio.h>

int isLittleIndian() {
    unsigned int u = 0x12345678;
    printf("size of int is %zu\n", sizeof u);
    printf("DEC: u=%u\n", u);
    printf("HEX: u=0x%x\n", u);
    unsigned int * o = &u;
    printf("value of *u=%u, &u=%p:\n", *o, &u);
    printf("memory order:\n");
    unsigned char * p = (unsigned char *)&u;
    for(int i=0; i < sizeof u; ++i) {
        printf("address %p holds %x\n", (void*)&p[i], p[i]);
    }
    return 0;
}

int main() {
   return isLittleIndian();
}

