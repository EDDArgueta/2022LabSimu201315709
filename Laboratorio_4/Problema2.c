/*
Autor:		 Edwin Argueta
Fecha:		 Sun May 8 15:42:24 CST 2022
Compilador:	 gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Compilar:	 gcc -o Problema2.out Problema2.c
Librerías:	 stdio
Resumen:	 Programa que recibe cinco enteros y luego los muestra de forma ordenada
             en orden ascendente utilizando el método de burbuja.
             
*/

// librerías
#include <stdio.h>

// define el tamño del arreglo
#define tamanio 5

int main()
{
    // declaración 
    int arreglo[tamanio];
    int i, j, aux;

    // indicador para el usuario
    puts("Programa que recibe cinco enteros y luego los muestra ordenados en forma ascendente.");
    // llena el arreglo con las entradas
    printf("Ingrese cinco enteros separando c/u de ellos con un 'esp':  "); 
    scanf("%d%d%d%d%d", &arreglo[0], &arreglo[1], &arreglo[2], &arreglo[3], &arreglo[4]); 

    // imprime el arreglo original
    puts("El arreglo original es: ");
    for (int i = 0; i < tamanio; i++)
        printf("%4d", arreglo[i]);

    // método burbuja: ordena los elementos del arreglo
    for (i = 0; i < tamanio; i++)
    {
        for (j = 0; j < tamanio; j++)
        {
            if (arreglo[j] > arreglo[j+1])
            {
                aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }   
        }     
    }

    // muestra el arreglo ordenado
    puts("\nEl arreglo ordenado en forma ascendente es: ");
    for (i = 0; i < tamanio; i++)
        printf("%4d", arreglo[i]);
    
    puts("");
    return 0;
} // fin del main

