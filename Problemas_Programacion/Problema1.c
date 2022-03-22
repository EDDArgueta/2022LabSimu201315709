/*
Autor:          Edwin Argueta
Fecha:          Tue Mar 22 13:21:17 CST 2022
Compilador:	    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:	    gcc -o Problema1.out Problema1.c
Librerías:	    stdio
Resumen:        Programa que calcula la media aritmética de números reales positivos 
                dados por el usuario.
*/

// librerías
# include <stdio.h>

int main() {

    // declaración e inicialización de variables
    double x;
    int n = 0;
    int i = 0;
    double med = 0;

    // indicador para el usuario
    printf(
        "Programa que calcula la media aritmetica de tres numeros reales positivos.\n");

    // itera tres veces
    while (i < 3)
    {
        printf("Ingrese un numero: ");
        scanf("%lf",&x);

        // evalúa si los valores ingresados son positivos
        if (x >= 0) 
        {   //de ser así incrementa los valores de n y med
            n++; 
            med += x;
        }

        i++;
    }

    // evalúa si el total de entradas es cero
    if (n == 0)
    {
        printf("Los valores ingresados eran negativos.\n");
    }else
        printf("La media aritmetica de los datos es: %.2f\n", 
            med/n);

    return 0;
} // fin del main