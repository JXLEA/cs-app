#include <stdio.h>

//   Suppose we number the bytes in a w-bit word from 0 (least significant) to w/8 − 1 (most significant).
//   Write code for the following C function,
//   which will return an unsigned value in which byte i of argument x has been replaced by byte b:
//   unsigned replace_byte (unsigned x, int i, unsigned char b);
//   Here are some examples showing how the function should work:
//   replace_byte(0x12345678, 2, 0xAB) --> 0x12AB5678
//   replace_byte(0x12345678, 0, 0xAB) --> 0x123456AB.

int print(unsigned int x) {
    printf("value %x, size of x = %lu\n", x, sizeof x);
    unsigned char * p = (unsigned char *)&x;
    for (int i = 0; i < sizeof x; i++) {
        printf("address %p holds %x\n", (void *)&p[i], p[i]);
    }
    printf("\n");
    return 0;
}

unsigned replace_byte (unsigned x, int i, unsigned char b) {
    unsigned char * p = (unsigned char*)&x;
    printf("value %x\n", x);
    p += i;
    *p = b;
    printf("value %x\n", x);
    return x;
}

int main() {
    replace_byte(0x12345678, 2, 0xAB);
    replace_byte(0x12345678, 0, 0xAB);
    return 0;
}