#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include "operaciones.h"

int main() {
    void *handle;
    handle = dlopen("../lib/liboperaciones.so", RTLD_LAZY);

    if (!handle) {
        fprintf(stderr, "%s\n", dlerror());
        return 1;
    }

    double a = 10.0, b = 5.0;
    double resultado;

    double (*suma_func)(double, double) = dlsym(handle, "suma");
    double (*resta_func)(double, double) = dlsym(handle, "resta");
    double (*multiplicacion_func)(double, double) = dlsym(handle, "multiplicacion");
    double (*division_func)(double, double) = dlsym(handle, "division");
    double (*raiz_cuadrada_func)(double) = dlsym(handle, "raiz_cuadrada");
    double (*coseno_func)(double) = dlsym(handle, "coseno");

    if ((suma_func == NULL) || (resta_func == NULL) || (multiplicacion_func == NULL) ||
        (division_func == NULL) || (raiz_cuadrada_func == NULL) || (coseno_func == NULL)) {
        fprintf(stderr, "%s\n", dlerror());
        dlclose(handle);
        return 1;
    }

    resultado = suma_func(a, b);
    printf("Suma: %lf\n", resultado);

    resultado = resta_func(a, b);
    printf("Resta: %lf\n", resultado);

    resultado = multiplicacion_func(a, b);
    printf("Multiplicación: %lf\n", resultado);

    resultado = division_func(a, b);
    printf("División: %lf\n", resultado);

    resultado = raiz_cuadrada_func(a);
    printf("Raíz Cuadrada: %lf\n", resultado);

    resultado = coseno_func(a);
    printf("Coseno: %lf\n", resultado);

    dlclose(handle);
    return 0;
}

