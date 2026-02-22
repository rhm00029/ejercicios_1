#include <stdio.h>
void swap(int *a, int *b) {
    //
}
int main(void) {
    int x = 1, y = 2;
    swap(&x, &y);
    printf("x=%d y=%d\n", x, y); // esperado: x=2 y=1
}