#include <stdio.h>

int main(){

    char nombre[50];

    printf("Hola mundo.\n");

    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("\nHola %s.",nombre);

    return 0;
}