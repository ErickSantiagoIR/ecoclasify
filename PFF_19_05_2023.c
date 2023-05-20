#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char residuo[50];
    int opcion, comuna;
    int menu = 1;

        //MENU
        while (menu) {
        printf("Hola, bienvenido a EcoClasify\n");
        printf("EcoClasify es una aplicación que te ayuda a clasificar los residuos en tres tipos:\n");
        printf("Reciclables, No Reciclables y Orgánicos. Además, te indica qué debes hacer con ellos.\n");
        printf("Selecciona lo que deseas hacer:\n");

        printf("[1] Clasificar un residuo.\n");
        printf("[2] Ubicaciones donde puedo vender el reciclaje.\n");
        printf("[3] Salir del programa.\n");
        scanf("%d", &opcion);

        // CASO 1
        if (opcion == 1) {
            printf("Por favor, ingresa el residuo que deseas clasificar (debe estar en minusculas): ");
            scanf("%s", residuo);
            if (strcmp(residuo, "plastico") == 0 || strcmp(residuo, "carton") == 0 || strcmp(residuo, "vidrio") == 0 || strcmp(residuo, "papel") == 0 || strcmp(residuo, "metal") == 0 || strcmp(residuo, "hierro") == 0 || strcmp(residuo, "botella plastica") == 0 || strcmp(residuo, "lata") == 0) {
                printf("El residuo es reciclable. Debe ser separado y depositado en contenedores o centros de reciclaje designados para su posterior procesamiento y transformacion en nuevos productos. Tambien recuerda que en gran cantidad pueden ser vendidos.\n");
            }
            else if (strcmp(residuo, "pañales") == 0 || strcmp(residuo, "colillas de cigarrillo") == 0 || strcmp(residuo, "envolturas") == 0 || strcmp(residuo, "pilas") == 0 || strcmp(residuo, "baterias") == 0 || strcmp(residuo, "envases contaminados") == 0 || strcmp(residuo, "material medico") == 0 || strcmp(residuo, "radiactivos") == 0 || strcmp(residuo, "plasticos de un solo uso") == 0) {
                printf("El residuo no es reciclable. Los residuos no reciclables se pueden gestionar de diversas formas, como su envio a vertederos sanitarios seguros, la incineracion controlada para generar energia y prevenir la liberacion de contaminantes, y la transformacion de algunos residuos en combustibles a traves de tecnologias de conversion de energia. Reducir la generacion de residuos no reciclables es fundamental, mediante decisiones conscientes al comprar productos con menor impacto ambiental y practicas de reutilizacion, reparacion y comparticion de objetos.\n");
            }
            else if (strcmp(residuo, "comida") == 0 || strcmp(residuo, "cascaras") == 0 || strcmp(residuo, "ramas") == 0 || strcmp(residuo, "madera") == 0 || strcmp(residuo, "envases contaminados") == 0 || strcmp(residuo, "material medico") == 0 || strcmp(residuo, "radiactivos") == 0 || strcmp(residuo, "plasticos de un solo uso") == 0) {
                printf("El residuo es orgánico.\n");
            }
            else {
                printf("El residuo no se reconoce.\n");
            }
        }
        // CASO 2
        else if (opcion == 2) {
            printf("Recuerda que solo contamos con ubicaciones por comunas y solo en Popayan, Colombia.\n");
            printf("Seleccione su comuna:\n");
            printf("Comuna [1]\n");
            printf("Comuna [2]\n");
            printf("Comuna [3]\n");
            printf("Comuna [4]\n");
            printf("Comuna [5]\n");
            printf("Comuna [6]\n");
            printf("Comuna [7]\n");
            printf("Comuna [8]\n");
            printf("Comuna [9]\n");
            scanf("%d", &comuna);

            switch (comuna) {
                case 1:
                    printf("Chatarrería Norte [Cl. 11 Nte. #9-2]\n");
                    break;
                case 2:
                    printf("Chatarrería la 69 [Calle 69 #16-63]\n");
                    break;
                case 3:
                    printf("Chatarrería y vulcanizadora [Calle 26 Norte]\n");
                    break;
                case 4:
                    printf("Chatarrería el zarco [Carrera 17 #9-A2]\n");
                    break;
                case 5:
                    printf("Chatarrería Sofía [Cl. 26c #9a - 25]\n");
                    break;
                case 6:
                    printf("Chatarrería Brisas del Río [Carrera 4AA #2 - 23]\n");
                    break;
                case 7:
                    printf("Recicladora del Sur [Calle 16 #20B-15]\n");
                    break;
                case 8:
                    printf("Chatarrería Central de Metales Palmira [Calle 5 #27A - 153]\n");
                    break;
                case 9:
                    printf("Chatarrería la 19 [Variante sur]\n");
                    break;
            }
        }
        // CASO 3
        else if (opcion == 3) {
            printf("Has decidido salir. Vuelve pronto\n");
            system("pause");
            break;
        }
    
        else {
            printf("Opción invalida. Por favor, selecciona una opcion valida.\n");
        }

        if (menu) {
            printf("\n");
            printf("¿Desea volver al menu? [1] Si, [0] No, deseo salir.: ");
            scanf("%d", &menu);
            printf("\n");
            if (menu == 0) {
            printf("Has decidido salir. ¡Vuelve pronto!\n");
            system("pause");
            break; // Salir del bucle while
                
            }
        }
    }

    return 0;
}
