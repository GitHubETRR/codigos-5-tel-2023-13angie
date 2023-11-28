#include <stdio.h>
#define cant 10
#define rangomax 20
#define rangomin 10

void ingresartemps(int[]);
int calcularprom(int[]);
int calcularmin(int[]);
int calcularmax(int[]);
int calcularango(int[]);
void printresultados(int, int, int, int);


int main(void){
    int temp[cant];
    ingresartemps(temp);
    int prom=calcularprom(temp);
    int min=calcularmin(temp);
    int max=calcularmax(temp);
    int rango=calcularango(temp);
    printresultados(prom, min, max, rango);

}
void ingresartemps(int temp[]){
    for(int i=0; i<cant; i++){
        printf("Ingrese la temperatura N%d: ",i+1);
        scanf("%d", &temp[i]);
    }
}
int calcularprom(int temp[]){
    int prom=0;
    for(int i=0; i<cant; i++){
        prom+=temp[i];
    }
    prom/=cant;
    return prom;
}
int calcularmin(int temp[]){
    int min=temp[0];
    for(int i=0; i<cant; i++){
        if(temp[i]<min){
            min=temp[i];
        }
    }
    return min;
}
int calcularmax(int temp[]){
    int max=temp[0];
    for(int i=0; i<cant; i++){
        if(temp[i]>max){
            max=temp[i];
        }
    }
    return max;
}
int calcularango(int temp[]){
    int rango=0;
    for(int i=0; i<cant; i++){
        if(temp[i]>=rangomin && temp[i]<=rangomax){
            rango++;
        }
    }
    return rango;
}
void printresultados(int prom, int min, int max, int rango){
    printf("El promedio de temperaturas es de: %d\n", prom);
    printf("La temperatura minima fue de: %dC y la maxima de: %dC\n", min, max);
}