#include <stdio.h>
#include "biblioteca.h"

int main() {
    float a = 15.0, b = 10.0;

    printf("Suma: %f\n", suma(a, b));
    printf("Resta: %f\n", resta(a, b));
    printf("Multiplicacion: %f\n", multiplicacion(a, b));
    printf("Division: %f\n", division(a, b));
    printf("Raiz Cuadrada de %f: %f\n", a, raiz_cuadrada(a));
    printf("Coseno aproximado de %f: %f\n", a, coseno_aproximado(a));

    return 0;
}
