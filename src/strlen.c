#include <stdio.h>

void *print_string_length(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    printf("Length of string: %d\n", length);
    return NULL;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);//safe input
    print_string_length(str);
    return 0;
}