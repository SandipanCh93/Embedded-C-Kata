#include <stdio.h>
#include <stdint.h>
#include <string.h>

// Safely converts a uint8_t buffer (little-endian) to uint32_t
uint32_t buffer_to_uint32(const uint8_t *buffer) {
    uint32_t value = 0;
    // Use memcpy to avoid alignment issues
    memcpy(&value, buffer, sizeof(uint32_t));
    return value;
}

int main() {
    uint8_t buffer[4];
    printf("Enter 4 bytes (space-separated): ");
    for (int i = 0; i < 4; i++) {
        scanf("%hhu", &buffer[i]);
    }

    uint32_t result = buffer_to_uint32(buffer);
    printf("Converted value: %u\n", result);

    return 0;
}