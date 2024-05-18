/********************************************************/
/*Universidad Nacional Autonoma de Mexico               */
/*Facultad de contaduria y administracion               */
/*Sistema Universidad Abierta y Educacion a Distancia   */
/*Informatica modalidad a distancia                     */
/*Asignatura: Diseno de algoritmos                      */
/*Asesor: Juan Manuel Martinez Fernandez                */
/*Alumno: Hector Martinez Calderon                      */
/*Grupo: 8192                                           */
/*Unidad 6: Desarrollo de programas                     */
/*Actividad: Actividad complementaria 1                 */
/*Fecha de entrega: 17 de mayo de 24                    */
/********************************************************/

/**********************************************************************/
/*Descripcion                                                         */ 
/*Este programa permite al usuario seleccionar 4 paquetes de comida   */
/*rapida entre un menu presentado                                     */
/*Datos de entrada:                                                   */
/*Seleccion del usuario                                               */
/**********************************************************************/

#include <stdio.h>
#include <stdlib.h> 

// Definicion de paquetes
const char *paquetes[][3] = {
    {"Paquete individual alitas", "Orden de 5 alitas, papas chicas y refresco de medio litro", "140"},
    {"Paquete individual hamburguesa", "Hamburguesa, papas chicas y refresco de medio litro", "120"},
    {"Paquete individual hotdog", "Orden de 2 hotdogs, papas chicas y refresco de medio litro", "90"},
    {"Paquete individual pizza", "Pizza chica, papas chicas y refresco de medio litro", "140"},
    {"Paque-pruebes", "2 alitas, una hamburguesa mini, una rebanada de pizza, papas chicas y refresco de medio litro", "130"},
    {"Paquete-llenes", "3 alitas, una hamburguesa mini, una rebanada de pizza, un hotdog, papas chicas y refresco de medio litro", "140"},
    {"Paque-compartas", "Orden de 5 alitas, una hamburguesa, dos rebanada de pizza, dos hotdogs, papas medianas y refresco de 1 litro", "220"},
    {"Paquete familiar", "Orden de 10 alitas, dos hamburguesas, una pizza chica, cuatro hotdogs, papas grandes y refresco de 2 litros", "450"},
    {"Paquete big family", "Orden de 20 alitas, cuatro hamburguesas, una pizza grande, seis hotdogs, dos ordenes de papas grandes y refresco de 3 litros", "850"}
};
const int paquetes_size = 9;

//Funcio para mostrar los paquetes
void mostrarPaquetes() {
    printf("Menu de paquetes:\n");
    for (int i = 0; i < paquetes_size; i++) {
        printf("%d. %s: %s - $%s\n", i + 1, paquetes[i][0], paquetes[i][1], paquetes[i][2]);
    }
}

//Funcion para validar que el dato introducido por el usuario es correcto (un numero entre 1 y 9 que es el total de paquetes)
int obtenerSeleccion() {
    int seleccion;
    printf("Seleccione un numero del paquete (1-9): ");
    scanf("%d", &seleccion);
    while (seleccion < 1 || seleccion > 9) {
        printf("Seleccion invalida. Intente nuevamente (1-9): ");
        scanf("%d", &seleccion);
    }
    return seleccion - 1; // Restar 1 para índice del array
}

//Funcion principal
int main() {
    int seleccion[4];
    float total = 0.0;
    
    printf("Sistema de ventas Los paquetes de la esquina.\n");
    
    //Ciclo para seleccion de los 4 paquetes
    for (int i = 0; i < 4; i++) {
        mostrarPaquetes();
        printf("Tienes que seleccionar un total de 4 paquetes.\n");
        printf("Selecciona el paquete %d de 4:\n", i + 1);
        seleccion[i] = obtenerSeleccion();
        
        //switch para la eleccion de cada paquete
        switch (seleccion[i]) {
            case 0:
                printf("Ha seleccionado: %s: %s - $%s\n\n", paquetes[0][0], paquetes[0][1], paquetes[0][2]);
                total += atof(paquetes[0][2]);
                break;
            case 1:
                printf("Ha seleccionado: %s: %s - $%s\n\n", paquetes[1][0], paquetes[1][1], paquetes[1][2]);
                total += atof(paquetes[1][2]);
                break;
            case 2:
                printf("Ha seleccionado: %s: %s - $%s\n\n", paquetes[2][0], paquetes[2][1], paquetes[2][2]);
                total += atof(paquetes[2][2]);
                break;
            case 3:
                printf("Ha seleccionado: %s: %s - $%s\n\n", paquetes[3][0], paquetes[3][1], paquetes[3][2]);
                total += atof(paquetes[3][2]);
                break;
            case 4:
                printf("Ha seleccionado: %s: %s - $%s\n\n", paquetes[4][0], paquetes[4][1], paquetes[4][2]);
                total += atof(paquetes[4][2]);
                break;
            case 5:
                printf("Ha seleccionado: %s: %s - $%s\n\n", paquetes[5][0], paquetes[5][1], paquetes[5][2]);
                total += atof(paquetes[5][2]);
                break;
            case 6:
                printf("Ha seleccionado: %s: %s - $%s\n\n", paquetes[6][0], paquetes[6][1], paquetes[6][2]);
                total += atof(paquetes[6][2]);
                break;
            case 7:
                printf("Ha seleccionado: %s: %s - $%s\n\n", paquetes[7][0], paquetes[7][1], paquetes[7][2]);
                total += atof(paquetes[7][2]);
                break;
            case 8:
                printf("Ha seleccionado: %s: %s - $%s\n\n", paquetes[8][0], paquetes[8][1], paquetes[8][2]);
                total += atof(paquetes[8][2]);
                break;
            default:
                printf("Selección inválida.\n");
                break;
        }
    }
    
    printf("Usted ha seleccionado los siguientes paquetes:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d. %s - $%s\n", i + 1, paquetes[seleccion[i]][0], paquetes[seleccion[i]][2]);
    }
    
    printf("El total de su compra es: $%.2f\n", total);
    printf("¡Gracias por su compra!\n");
    return 0;
}

