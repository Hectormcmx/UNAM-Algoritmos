/********************************************************/
/*Universidad Nacional Autonoma de Mexico               */
/*Facultad de contaduria y administracion               */
/*Sistema Universidad Abierta y Educacion a Distancia   */
/*Informatica modalidad a distancia                     */
/*Asignatura: Diseno de algoritmos                      */
/*Asesor: Juan Manuel Martinez Fernandez                */
/*Alumno: Hector Martinez Calderen                      */
/*Grupo: 8192                                           */
/*Unidad 5: Diseño de algoritmos.                       */
/*Actividad: Actividad Complementaria 2                 */
/*Fecha de entrega: 03 de mayo de 24                    */
/********************************************************/

/**********************************************************************/
/*Descripcion                                                         */ 
/*Este programa calcula elementos de la sucesion                      */
/*(n+1)(2n+1))/6                                                      */
/*Datos de entrada:                                                   */
/*Numero entero que representa los elementos deseados de la susecion  */
/**********************************************************************/

#include <stdio.h>

int n,i,resultado;

int main() {
    printf("Este programa calcula elementos de la sucesion\n");
    printf("(n(n+1)(2n+1))/6\n");
    printf("Por favor ingresa el numero de elementos que deseas obtener\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        resultado = (i*(i+1)*(2*i+1))/6;
        printf("La posicion %d de la sucesion tiene el valor %d \n", i,resultado);
    }
    return 0;
}