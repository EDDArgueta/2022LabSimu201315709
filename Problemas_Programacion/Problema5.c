/*
Autor:          Edwin Argueta
Fecha:		    Fri Mar 25 10:29:42 CST 2022
Compilador:	    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:       gcc -o Problema5.out Problema5.c
Librerías:	    stdio
Resumen:		Programa que recibe como entradas dos números enteros y luego 
                muestra un rango de números primos delimitado por las entradas.
*/

// librerías
# include <stdio.h>

int main()
{
    // declaración de variables
    int N1, N2, i, primo;

    // indicador para el usuario
    printf("%s\n%s\n",
        "Este programa recibe como entradas dos numeros enteros positivos y apartir de ellos", 
        "muestra un rango de numeros primos delimitado por las entradas.");
    
    // obtiene el valor de las entradas
    printf("Ingrese el primer entero: ");
    scanf("%d", &N1);
    printf("Ingrese el segundo entero: ");
    scanf("%d", &N2);

    // evalúa que las entradas sean positivas
    while (N1 <= 0 || N2 <= 0)
    {
        printf("Ingrese numeros enteros positivos.\n");
        printf("Ingrese el primer entero: ");
        scanf("%d", &N1);
        printf("Ingrese el segundo entero: ");
        scanf("%d", &N2);
    }

    i = N1;

    // fase de procesamiento
    while (i <= N2)
    {
        // inicia el proceso Es_Primo
        int j = 2;
        primo = 1;

        while (j < i && primo == 1)
        {
            if (i % j == 0)               
                primo = 0;

            j++;
        } // fin de ES_Primo

        // imprime el valor del primo si primo es 1
        if (primo == 1)
            printf("%d\n", i);
        
        i++;
    }

    return 0;
} // fin del main
