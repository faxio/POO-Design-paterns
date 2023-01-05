#include <stdio.h>

int main(void)
{
    int numero = 0;

    if (numero == 0)
    {
        printf("Hola \n");
    }
    else
    {
        printf("Adios \n");
    }

    // Operador ternario .>
    numero = numero == 0 ? 1 : 2;

    return 0;
}

// Compilacion: gcc <nombre_archivo> -o <nombre_ejecutable>