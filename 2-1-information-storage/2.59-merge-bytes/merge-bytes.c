#include <stdio.h>

// Write a C expression that will yield a word consisting
// of the least significant byte of x and the remaining bytes of y.
// For operands x = 0x89ABCDEF and y = 0x76543210, this would give 0x765432EF.

int print(unsigned int x) {
    printf("value %x, size of x = %lu\n", x, sizeof x);
    unsigned char * p = (unsigned char *)&x;
    for (int i = 0; i < sizeof x; i++) {
        printf("address %p holds %x\n", (void *)&p[i], p[i]);
    }
    printf("\n");
    return 0;
}

int merge_bytes(unsigned int x, unsigned int y) {
    print(x);
    print(y);

    unsigned char * last_sign_x = (unsigned char *)&x;
    printf("Last significant byte for x is = %x\n", last_sign_x[0]);

    unsigned char * last_sign_y = (unsigned char *)&y;
    printf("Last significant byte for y is = %x\n", last_sign_y[0]);

    last_sign_y[0] = last_sign_x[0];

    print(y);
    return 0;
}

int main() {
    unsigned int x = 0x89ABCDEF;
    unsigned int y = 0x76543210;
    merge_bytes(x, y);
    return 0;
}