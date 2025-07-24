#include <stdio.h>

void reverse_array(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int n = 0;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int my_array[n];
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &my_array[i]);
    }
    int size = sizeof(my_array) / sizeof(my_array[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    reverse_array(&my_array[0], size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");
    return 0;
}