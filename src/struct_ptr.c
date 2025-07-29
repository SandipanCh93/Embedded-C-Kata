#include<stdio.h>
// #pragma pack(push, 1) // Ensure 1-byte alignment for the struct
typedef struct __attribute__((packed)) {
    int x;
    char label[5];
    float y;
} Point;
// #pragma pack(pop) // Restore default alignment after the struct definition

void print_point(const Point *p) {
    printf("Point(%d, %.2f, %s, %d)\n", p->x, p->y, p->label, sizeof(*p));
}

int main() {
    Point p1 = {10,"p1", 20.5f};
    Point p2 = {30,"p2", 40.7f};

    print_point(&p1);
    print_point(&p2);

    return 0;
}