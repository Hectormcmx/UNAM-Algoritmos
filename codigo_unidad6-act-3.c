/********************************************************/
/*Universidad Nacional Autonoma de Mexico               */
/*Facultad de contaduria y administracion               */
/*Sistema Universidad Abierta y Educacion a Distancia   */
/*Informatica modalidad a distancia                     */
/*Asignatura: Diseno de algoritmos                      */
/*Asesor: Juan Manuel Martinez Fernandez                */
/*Alumno: Hector Martinez Calderen                      */
/*Grupo: 8192                                           */
/*Unidad 6: Desarrollo de programas                     */
/*Actividad: Actividad 3                                */
/*Fecha de entrega: 10 de mayo de 24                    */
/********************************************************/

/**********************************************************************/
/*Descripcion                                                         */ 
/*Este programa ordena de mayor a menor 3 numeros ingresados por el   */
/*usuario, tales numeros deberan de estar entre 3 y 15                */
/*Datos de entrada:                                                   */
/*Fecha de nacimiento                                                 */
/**********************************************************************/

#include <stdio.h>

int main() {

    int numeros[3],temp;

    // Solicita y valida 3 numeros
    for (int i = 0; i < 3; i++) {
        while (1) { 
            printf("Introduce el numero %d (entre 3 y 15): ", i + 1);
            scanf("%d", &numeros[i]);
            if (numeros[i] >= 3 && numeros[i] <= 15) {
                break; 
            } else {
                printf("Error: el numero debe estar entre 3 y 15. Intentalo de nuevo.\n");
            }
        }
    }

    // Imprimir los números introducidos
    printf("Los numeros introducidos son: %d, %d, %d\n", numeros[0], numeros[1], numeros[2]);

    // Algoritmo de ordenamiento burbuja para ordenar de mayor a menor
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (numeros[j] < numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // Imprimir los números ordenados
    printf("Los numeros introducidos ordenados de mayor a menor son: %d, %d, %d\n", numeros[0], numeros[1], numeros[2]);

    return 0;
}