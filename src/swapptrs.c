#include<stdio.h>

void swap_pointers(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int x = 90, y = 10009;
    int *ptr_x = &x, *ptr_y = &y;

    printf("Before swap: *ptr_x = %d, *ptr_y = %d\n", *ptr_x, *ptr_y);
    swap_pointers(&x, &y);
    printf("After swap: *ptr_x = %d, *ptr_y = %d\n", *ptr_x, *ptr_y);

    return 0;
}