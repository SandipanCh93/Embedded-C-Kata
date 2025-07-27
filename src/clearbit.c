#include <stdint.h>
#include <stdio.h>

void clear_bit(uint32_t *num, uint8_t bit) {
    *num &= ~(1 << bit);
}

int main() {
    uint32_t number = 0; // Example number
    printf("enter a number: ");
    scanf("%u", &number); // Read a number from input
    printf("Original number: %u\n", number);
    uint8_t bit_to_clear = 3; // Bit position to clear (0-indexed)
    
    clear_bit(&number, bit_to_clear);
    
    // Output the modified number
    printf("Modified number: %u\n", number);

    // Output the binary representation
    printf("Binary representation: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf("\n");
    return 0;
}