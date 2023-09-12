#include <math.h>

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicacion(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b == 0) {
        return 0; // Manejar la división por cero como quieras
    }
    return a / b;
}

double raiz_cuadrada(double x) {
    return sqrt(x);
}

double coseno(double x) {
    return cos(x);
}

