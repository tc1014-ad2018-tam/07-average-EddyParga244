/*
 * Este programa fue realizado como la tarea#7 el 6 de septiembre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es mostrar el promedio de la serie de números dados por el usuario y
 * leer cuantos números introdujo.
 *
 * Fecha: 6 de septiembre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>

int main() {
    //Declaración de variables
    int n=0;
    double add;
    double k;
    //Ciclo do/while: Cada ves que el usuario escriba un número, este se suma a la
    //variable "add", el ciclo se detiene cuando escriba un 0.
    do{
        printf("Escribe un número: ");
        scanf("%lf",&k);
        add+=k;
        n++;
    } while(k!=0);

    //Operación del promedio (no incluye el 0).
    add=add/(n-1);
    printf("El promedio es: %lf\n", add);
    printf("lei %i números", n);

    return 0;
}