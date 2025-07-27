#include<stdio.h>
#include <stdint.h>

void set_bit(uint8_t *byte, uint8_t bit_position) {
    *byte |= (1 << bit_position);
}

int main() {
    uint8_t byte = 0b00001111;
    printf("Before: %02X\n", byte);
    set_bit(&byte, 7);
    printf("After:  %02X\n", byte);
    return 0;
}