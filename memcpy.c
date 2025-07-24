#include <stdio.h>
void *memcpy(void *dest, const void *src, size_t n)
{
    char *d = (char *)dest;
    const char *s = (const char *)src;
    while (n--)
    {
        *d++ = *s++;
    }
}
int main()
{
    char source[20];
    char destination[20];
    printf("Enter a string to copy: ");
    fgets(source, sizeof(source), stdin);
    memcpy(destination, source, sizeof(source));

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
