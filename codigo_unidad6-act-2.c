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
/*Actividad: Actividad 2                                */
/*Fecha de entrega: 10 de mayo de 24                    */
/********************************************************/

/**********************************************************************/
/*Descripcion                                                         */ 
/*Este programa devuelve el signo zodiacal con base en la fecha de    */
/*nacimiento                                                          */
/*Datos de entrada:                                                   */
/*Fecha de nacimiento                                                 */
/**********************************************************************/

#include <stdio.h>

int main() {
    int dia, mes, anio;

    // Solicita y valida el día de nacimiento
    while (1) {
        printf("Introduce el día de tu nacimiento (2 dígitos, por ejemplo, 08): ");
        scanf("%d", &dia);
        if (dia > 0 && dia <= 31) {
            break;
        } else {
            printf("Día inválido. Por favor, introduce un valor entre 01 y 31.\n");
        }
    }

    // Solicita y valida el mes de nacimiento
    while (1) {
        printf("Introduce el mes de tu nacimiento (2 dígitos, por ejemplo, 05 para Mayo): ");
        scanf("%d", &mes);
        if (mes > 0 && mes <= 12) {
            break;
        } else {
            printf("Mes inválido. Por favor, introduce un valor entre 01 y 12.\n");
        }
    }

    // Solicita y valida el año de nacimiento
    while (1) {
        printf("Introduce el año de tu nacimiento (4 dígitos, por ejemplo, 1983): ");
        scanf("%d", &anio);
        if (anio >= 1000 && anio <= 9999) {
            break;
        } else {
            printf("Año inválido. Por favor, introduce un valor de 4 dígitos, por ejemplo, 1983.\n");
        }
    }

    // Imprime la fecha de nacimiento
    printf("Tu fecha de nacimiento es: %02d/%02d/%04d\n", dia, mes, anio);

    // Determina el signo zodiacal usando mes y día
    switch(mes) {
        case 1:
            if (dia <= 19) printf("Tu signo zodiacal es Capricornio.\n");
            else printf("Tu signo zodiacal es Acuario.\n");
            break;
        case 2:
            if (dia <= 18) printf("Tu signo zodiacal es Acuario.\n");
            else printf("Tu signo zodiacal es Piscis.\n");
            break;
        case 3:
            if (dia <= 20) printf("Tu signo zodiacal es Piscis.\n");
            else printf("Tu signo zodiacal es Aries.\n");
            break;
        case 4:
            if (dia <= 19) printf("Tu signo zodiacal es Aries.\n");
            else printf("Tu signo zodiacal es Tauro.\n");
            break;
        case 5:
            if (dia <= 20) printf("Tu signo zodiacal es Tauro.\n");
            else printf("Tu signo zodiacal es Géminis.\n");
            break;
        case 6:
            if (dia <= 20) printf("Tu signo zodiacal es Géminis.\n");
            else printf("Tu signo zodiacal es Cáncer.\n");
            break;
        case 7:
            if (dia <= 22) printf("Tu signo zodiacal es Cáncer.\n");
            else printf("Tu signo zodiacal es Leo.\n");
            break;
        case 8:
            if (dia <= 22) printf("Tu signo zodiacal es Leo.\n");
            else printf("Tu signo zodiacal es Virgo.\n");
            break;
        case 9:
            if (dia <= 22) printf("Tu signo zodiacal es Virgo.\n");
            else printf("Tu signo zodiacal es Libra.\n");
            break;
        case 10:
            if (dia <= 22) printf("Tu signo zodiacal es Libra.\n");
            else printf("Tu signo zodiacal es Escorpio.\n");
            break;
        case 11:
            if (dia <= 21) printf("Tu signo zodiacal es Escorpio.\n");
            else printf("Tu signo zodiacal es Sagitario.\n");
            break;
        case 12:
            if (dia <= 21) printf("Tu signo zodiacal es Sagitario.\n");
            else printf("Tu signo zodiacal es Capricornio.\n");
            break;
        default:
            printf("Fecha invalida\n");
    }


    return 0;
}