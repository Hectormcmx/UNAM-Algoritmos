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
/*Actividad: Actividad complementaria 2                 */
/*Fecha de entrega: 17 de mayo de 24                    */
/********************************************************/

/**********************************************************************/
/*Descripcion                                                         */ 
/*Este programa permite permita sumar los primeros “n” números pares  */
/*indicados por el usuario.                                           */
/*Datos de entrada:                                                   */
/*Numero entero positivo                                              */
/*Datos de salida:                                                    */
/*Ejemplo                                                             */
/*Si n = 3                                                            */
/*El programa mostrará                                                */
/*Para n = 1, Suma = 2.                                               */
/*Para n = 2, Suma = 4.                                               */
/*para n = 3, Suma = 6.                                               */
/**********************************************************************/

#include <stdio.h>

int main() {
    int n;
    char c;

    // Solicitar al usuario un numero entero positivo
    printf("Ingrese un número entero positivo: ");

    //Se valida que el dato introducido por el usuario sea un entero positivo
    while (scanf("%d", &n) != 1 || n <= 0) { 
        while ((c = getchar()) != '\n' && c != EOF);  // Se limpia el bufer de entrada para poder recibir un nuevo dato correcto
        printf("Entrada inválida. Por favor, ingrese un número entero positivo: ");
    }

    // Loop para mostar los numeros desde 1 hasta n 
    //y su suma consigo mismo, la cual da como resultado un numero par 
    for (int i = 1; i <= n; i++) {
        int numero_par = i + i;
        printf("Para n = %d, Suma = %d\n", i, numero_par);
    }

    return 0;
}

