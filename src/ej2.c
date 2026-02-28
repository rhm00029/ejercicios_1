#include <stdio.h>
void swap(int *a, int *b) {
    int v[2] = { 0, 0 };  // inicializar el vector

    v[0] = *a;   // asignar al vector los valores de a y b
    v[1] = *b;

    *a = v[1];   // dar la vuelta a los valores
    *b = v[0];
}
int main(void) {
    int x = 8, y = 4;
    swap(&x, &y);
    printf("x=%d y=%d\n", x, y); // esperado: x=2 y=1
}