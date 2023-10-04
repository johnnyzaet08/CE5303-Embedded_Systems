#include "biblioteca.h"

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
    if (a < 0) return -1; // Error, no se puede calcular la raíz cuadrada de un número negativo
    if (a == 0 || a == 1) return a;

    float error = 0.00001; // Precisión deseada
    float x = a;
    float y = (x + a / x) / 2;

    while (x - y > error) {
        x = y;
        y = (x + a / x) / 2;
    }

    return y;
}

float factorial(int n) {
    if (n == 0) return 1;
    float fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

float potencia(float base, int exponente) {
    float resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

float coseno_aproximado(float x) {
    float sum = 0;
    int n = 10; // Número de términos en la serie

    for (int i = 0; i < n; i++) {
        float term = (i % 2 == 0 ? 1 : -1) * (potencia(x, 2 * i) / factorial(2 * i));
        sum += term;
    }

    return sum;
}
