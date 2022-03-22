/*
Autor:          Edwin Argueta
Fecha:		    Tue Mar 22 16:53:36 CST 2022
Compilador:	    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:		gcc -o Problema3.out Problema3.c
Librerías:	    stdio
Resumen:		Programa que calcula la raíz cuadrada entera de un
                número positivo.
*/

// librerías
# include <stdio.h>

int main()
{
    // declaración e inicialización de variables
    double N;
    int i = 1;

    // indicador para el usuario
    printf("%s\n%s",
        "Programa que calcula la raiz cuadrada entera de un numero positivo.",
        "Ingrese un numero: ");
    scanf("%lf",&N);

    // itera de forma indefinida mientras
    // la condición se cumpla
    while (i*i <= N)
        i++;

    // imprime el resultado
    printf("La raiz cuadrada de %.2f es %d.\n", N, i-1);    
    
    return 0;
} // fin del main