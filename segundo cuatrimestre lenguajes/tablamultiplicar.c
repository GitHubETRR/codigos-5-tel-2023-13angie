#include <stdio.h>

int main (void)
{
    // declaro variables
    int numero;
    int cantidad;
    int devuelta;
    do
    {
        // pedir datos
        printf("Escribe un numero para saber los valores de su tabla de multiplicar\n");
        scanf("%d", &numero);
        printf("Escribe cantidad de multiplos deseada\n");
        scanf("%d", &cantidad);
        printf("\n");
        // printea los resultados
        for (int i = 1; i <= cantidad; i++)
        {
            printf("%d x %d = %d\n", numero, i, i * numero);
        }
        // hacerlo o no de vuelta
        printf("Desea repetir el programa? Escribe 1 para SI o 0 para NO\n");
        scanf("%d", &devuelta);
    } while (devuelta == 1);
}
