#include<stdio.h>

void strcpy_s(char *dest, const char *src) {
    while (*src != '\0') {
        *dest++ = *src++;
    }
    *dest = '\0'; // Null-terminate the destination string
}

int main() {
    char source[100];
    char destination[100];

    printf("Enter a string to copy: ");
    fgets(source, sizeof(source), stdin); // Safe input

    strcpy_s(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}