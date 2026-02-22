#include <stdio.h>
int main(void) {
    int x = 5;
    int *p = &x;
    //imprimir x, &x, p, *p
    printf("x = %d\n", x);
    printf("&x = %p\n", (void*)&x);
    printf("p = %p\n", (void*)p);
    printf("*p = %d\n", *p);

    // modificar x a 99 usando p
    *p = 99;
    // imprimir x
    printf("*p = %d\n", *p);
    return 0;
}
