/********************************************************/
/*Universidad Nacional Autonoma de Mexico               */
/*Facultad de contaduria y administracion               */
/*Sistema Universidad Abierta y Educacion a Distancia   */
/*Informatica modalidad a distancia                     */
/*Asignatura: Diseno de algoritmos                      */
/*Asesor: Juan Manuel Martinez Fernandez                */
/*Alumno: Hector Martinez Calderen                      */
/*Grupo: 8192                                           */
/*Unidad 4: Analisis de problemas                       */
/*Actividad: Actividad Complementaria 1                 */
/*Fecha de entrega: 05 de abril 2024                    */
/********************************************************/

/**********************************************************************/
/*Descripcion                                                         */ 
/*Este programa calcula algunos parametros de una piscina             */
/*Datos de entrada:                                                   */
/*Medidas de la piscina                                               */
/*Para piscinas rectangulares se necesita: largo, ancho y alto        */
/*Para piscinas circulares se necesita diametro y alto                */
/*Datos de salida                                                     */
/*Capacidad de la piscina en litros                                   */
/*Cantidad requerida de cloro en gramos                               */
/**********************************************************************/

#include <stdio.h>
#include <string.h>

char tipo;
float largo,ancho,alto,volumen,diametro;
float cloroli,clorols;

int main()
{
    printf("Calculadora para piscinas\t\n");
    printf("Introduzca la letra R si su piscina es rectangular y precione enter\t\n");
    printf("Introduzca la letra C si su piscina es redonda y precione enter\t\n");
    scanf( "%c", &tipo );
    if (!strcmp(&tipo, "R")) {
        printf("Su piscina es rectangular\t\n");
        printf("Introduzca la medida del largo en metros\t\n");
        scanf("%f", &largo);
        printf("Introduzca la medida del ancho en metros\t\n");
        scanf("%f", &ancho);
        printf("Introduzca la medida del alto en metros\t\n");
        scanf("%f", &alto);
        volumen = largo*alto*ancho*1000;
        cloroli = volumen*0.0015;
        clorols = cloroli*3;
        printf("Su piscina tiene una capacidad de %f litros\t\n",volumen);
        printf("Para agregar cloro por primera vez tiene que tener entre 1 y 3 partes por millon\t\n");
        printf("Por lo que usted tiene que agregar entre %f y %f gramos de cloro en polvo\t\n",cloroli,clorols);
    }else
        if (!strcmp(&tipo, "C")){
            printf("Su piscina es redonda\t\n");
            printf("Introduzca el diametro de su piscina\t\n");
            scanf("%f",&diametro);
            printf("Introduzca la medida del alto\t\n");
            scanf("%f",&alto);
            volumen = 3.141592*(diametro/2)*(diametro/2)*alto*1000;
            cloroli = volumen*0.0015;
            clorols = cloroli*3;
            printf("Su piscina tiene una capacidad de %f litros\t\n", volumen);
            printf("Para agregar cloro por primera vez tiene que tener entre 1 y 3 partes por millon\t\n");
            printf("Por lo que usted tiene que agregar entre %f y %f gramos de cloro en polvo\t\n",cloroli,clorols);
        }else{
            printf("No se selecciono una opcion correcta\t\n");
        }

    return 0;
}
