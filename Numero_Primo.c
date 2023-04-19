/*Definición de librerías*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Función que verificará si 'num' es un numero positivo*/
int verify_function (int num)
{
    int vflag = 1; /*Definición de bandera para bucle while*/

    while (vflag == 1)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);

        if (num > 0) /*Si 'num' es mayor a cero, se rompe el bucle*/
        {
            vflag = 0;
        }
        else /*Si 'num' es menor a cero, el bucle continúa hasta ingresar otro valor mayor*/
        {
            vflag = 1;
            printf("\nIngrese un numero POSITIVO\n");
        }
    }
    
    return num; /*Regreso a la función principal 'main' */
}

/*Función que determinará si un número es primo o no*/
int prime_number (int num, int count)
{
    for (int i = 1; i <= num; i++) /*Bucle 'for' que recorrerá cada número entre 1 y 'num'*/
    {
        if (num%i == 0) /*Mediante la operación de residuo, se obtiene las veces que un número es 
        divisible para otros*/
        {
            count++; /*Contador que almacena la cantidad de veces que un número fue divisible para 
            otros*/
        }
    }

    return count; /*Regreso a la función principal*/
}

/*Función principal*/
int main ()
{
    /*Definición de variables*/
    int num; 
    int count = 0;

    /*Llamada a las funciones*/

    num = verify_function(num);
    count = prime_number(num, count);

   if (count > 2){ /*Compara la variable 'count' con 2, y determina si es o no, un número primo*/
        printf("El nunmero ingresado NO es primo:  %d", num);
    }
    else printf ("El numero ingresado SI es primo:  %d", num);

    return 0;
}