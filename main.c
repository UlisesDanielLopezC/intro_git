#include <stdio.h>

int main(){

    char nombre[50];
    unsigned int edad;

    printf("Hola mundo.\n");

    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("\nHola %s",nombre);

    printf("\nEdad: ");
    scanf("%u",&edad);
    printf("Vas a cumplir %u",edad+1);


    return 0;
}