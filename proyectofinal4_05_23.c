#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char reciclables[20], noreciclables[20], organicos[20];
    int opcion;
        //MENU
        printf("Hola bienvenido a EcoClasify\n");
        printf("EcoClasify es una App que te ayuda a clasificar los residuos en tres tipos:\n");
        printf("Reciclables, No Reciclables y Organicos, ademas te indique que es lo que debes hacer con estos.\n");
        printf("Selecciona que deseas hacer.\n");
        
        switch (opcion) {
        //CASO1
        printf("1. Si deseas clasificar un residuo:\n");
        printf("Por favor ingresa el residuo que deseas clasificar: ");
        scanf("%s","%s","%s", reciclables, noreciclables, organicos);
        
        //CASO2
        printf("2. Salir del programa");
        case 2:
     
        printf("Has decidido salir vuelve pronto.\n");
        default:
     
        printf("Opción inválida\n");}

        
        return 0;
}