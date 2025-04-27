#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer pointer, size_t len) {
    for(int i = 0; i < len; i++) {
        printf("%.2x", pointer[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void show_long(long x) {
    show_bytes((byte_pointer) &x, sizeof(long));
}

void show_short(short x) {
    show_bytes((byte_pointer) &x, sizeof(short));
}

void show_double(double x) {
    show_bytes((byte_pointer) &x, sizeof(double));
}



int main() {
    int ival = 12345;
    float fval = (float)ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
    show_double((double)ival);
    show_long((long)ival);
    show_short((short)ival);

    return 0;
}

