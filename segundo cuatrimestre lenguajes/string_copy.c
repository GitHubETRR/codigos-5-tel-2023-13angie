#include <stdio.h>
#include <string.h>
#define CANT_MAX 5 

int main (void){
    char txt1[]="hola"; //el primer string dice hola
    char txt2[CANT_MAX]; //el segundo string tiene 5 espacios
    //int i=0; 
    strcpy(txt2,txt1); //al string 2 le copio el valor del string 1
    printf("%s",txt2);
    //(otra forma de imprimir el string: while(txt2[i])printf("%c",txt2[i++]);)
    //se van a imprimir todos los caracteres del string desde el caracter i hasta el nule
    return 0;
}