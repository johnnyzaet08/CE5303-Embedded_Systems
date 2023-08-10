#include "biblioteca.h"
#include <math.h>

float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0.0;
    }
}

float raiz_cuadrada(float a) {
    return sqrt(a);
}

float coseno_aproximado(float a) {
    return cos(a); // Utiliza la función cos() de la biblioteca math.h
}
