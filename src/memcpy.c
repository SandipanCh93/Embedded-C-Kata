#include <stdio.h>
void *memcpy_s(void *dest, const void *src, size_t n)
{
    char *d = (char *)dest;
    const char *s = (const char *)src;
    while (n--)
    {
        *d++ = *s++;
    }
    return dest;
}
int main()
{
    char source[20];
    char destination[20];
    printf("Enter a string to copy: ");
    fgets(source, sizeof(source), stdin);
    memcpy_s(destination, source, sizeof(source));

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
