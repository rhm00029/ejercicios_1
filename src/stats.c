#include "stats.h"
#include <math.h>
#include <stdio.h>

int max_int(const int *v, size_t n) {
    int max = v[0];
    for (int i = 1; i < n; i++) {
        if (max < v[i]) {
            max = v[i];
        }
    }
    return max;
}
int min_int(const int *v, size_t n) {
    int min = v[0];
    for (int i = 1; i < n; i++) {
        if (min > v[i]) {
            min = v[i];
        }
    }
    return min;
}
double media_int(const int *v, size_t n) {
    double suma = v[0];
    for (int i = 1; i < n; i++) {
        suma = v[i] + suma;
    }
    return suma/(double)n;
}
void normaliza(double *v, size_t n) {
    if (n == 0) return;
    // media
    double suma = v[0];
    for (int i = 1; i < n; i++) {
        suma = v[i] + suma;
    }
    double media = suma/(double)n;
    // desviacion
    double sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum2 = pow(v[i]-media, 2) + sum2;
    }
    double desviacion = sqrt((1/(double)n)*sum2);
    if (desviacion == 0) return;
    // normalizar vector
    for (int i = 0; i < n; i++) {
        v[i] = (v[i] - media) / desviacion;
    }
}