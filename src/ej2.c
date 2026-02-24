#include <stdio.h>
void swap(int *a, int *b) {
    int v[2] = { 0, 0 };

    v[0] = *a;
    v[1] = *b;

    *a = v[1];
    *b = v[0];
}
int main(void) {
    int x = -98, y = 4;
    swap(&x, &y);
    printf("x=%d y=%d\n", x, y); // esperado: x=2 y=1
}