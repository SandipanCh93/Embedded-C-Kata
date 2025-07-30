#include<stdio.h>

void clearbitaddress(int bitposition) {
    
    // Assuming the address 0x4231 is a valid memory-mapped register
    // and that we want to clear a specific bit at the given position.
    volatile int *ptr = (volatile int *)0x1000; // Example address
    if(ptr == NULL) {
        printf("Invalid address.\n");
        return;
    } else {
        *ptr &= ~(1 << bitposition); // Clear the bit at the specified position
        printf("Bit at position %d cleared.\n", bitposition);
    }
}

int main() {
    int bitposition = 3; // Example bit position to clear
    clearbitaddress(bitposition);
    return 0;
}