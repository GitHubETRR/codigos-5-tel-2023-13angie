/* CONSIGNA: Realizar una funcion que pase a mayuscula el texto ingresado si corresponde. */

#include <stdio.h>
#define cant 100

void ingresartexto(char[]);
void mayuscularizar(char[]);
void imprimir(char[]);

int main(){
char txt[cant];
ingresartexto(txt);
mayuscularizar(txt);
imprimir(txt);
}

void ingresartexto(char txt[]){
    printf("Ingrese el texto que desee pasar a mayuscula (maximo 100 caracteres) \n");
    gets(txt);
}

void mayuscularizar(char txt[]){
    for(int i=0; i<cant; i++){
        if(txt[i]<='z' && txt[i]>='a'){
            txt[i]=txt[i]-32;
        }
    }
}

void imprimir(char txt[]){
    printf("%s\n",txt);
}
