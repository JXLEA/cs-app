#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

//   Write C expressions that evaluate to 1 when the following conditions are true and to 0 when they are false.
//   Assume x is of type int.
//   A. Any bit of x equals 1.
//   B. Any bit of x equals 0.
//   C. Any bit in the least significant byte of x equals 1.
//   D. Any bit in the most significant byte of x equals 0.
//   Your code should follow the bit-level integer coding rules (page 164), with the
//   additional restriction that you may not use equality (==) or inequality (!=) tests.


bool any_bit_is_1(unsigned int x) {
   return x;
}

char* hecToBinary(int n) {

}

// function to convert decimal to binary
char* decToBinary(int n) {

}

char*  most_sign_is_1(unsigned int x) {
    unsigned int n = *(unsigned char *)&x;
    printf("n is %x\n", n);
    return decToBinary(n);
}

int main() {
//0xbc614e
    char* bin = most_sign_is_1(0x12345678);
    printf("%s\n", bin);
    return 0;
}