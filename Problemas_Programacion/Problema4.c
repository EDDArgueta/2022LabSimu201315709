/*
Autor:          Edwin Argueta
Fecha:		    Thu Mar 24 12:45:20 CST 2022
Compilador:	    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:		gcc -o Problema4.out Problema4.c
Librerías:	    stdio
Resumen:		Programa que determina si un número mayor que uno 
                es primo.
*/

// librerías
# include <stdio.h>

int main()
{
    // declaración e inicialización de variables
    int N;
    int i = 2;
    int primo = 1;

    // indicador para el usuario
    printf("%s\n%s",
        "Este programa determina si un numero mayor que uno es primo.",
        "Ingrese un numero: ");
    scanf("%d",&N);

    // itera de forma indefinida hasta que ingrese un número válido
    while (N <= 1)
    {
        printf("El numero ingresado no es valido. Ingrese otro numero: ");
        scanf("%d",&N);
    }

    // fase de procesamiento del valor de N
    while (i < N-1 && primo == 1)
    {
        if (N%i == 0)
            primo = 0;
        
        i++;
    }

    // imprime si N es primo o no
    if (primo == 0)
        printf("El numero %d no es primo.\n", N);
    else
        printf("El numero %d es primo.\n", N);

    return 0;
} // fin del main