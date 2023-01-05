#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void intercambio(int *a, int *b);
int main(void)
{
    int x = 10;
    int i = 6, j = 7;
    intercambio(&i, &j);
    printf("i: %d , j: %d\n", i, j);
    // Si quisieramos saber la direccion de memoria de x se antepone un "&"
    printf("%x\n", &x);
    int *px = &x; // A los punteros se les asigna la direccion de memoria
    // para optener el valor de px
    printf("Direccion: %d , valor: %d ", &x, x);
    printf("Direccion: %d , valor: %d ", px, *px);

    return 0;
}

void intercambio(int *a, int *b)
{
    int aux = *a; // guarda el valor referenciado en a
    *a = *b;      // acceder al entero referenciado en b y asignarlo a "a"
    *b = aux;
}

// Compilacion: gcc <nombre_archivo> -o <nombre_ejecutable>