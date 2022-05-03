/*
Autor:		    Edwin Argueta
Fecha:		    Tue Apr 26 17:05:57 CST 2022
Compilador:	    gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Compilar:       gcc -o Problema1.out Problema1.c -lm
Librerías:	    stdio y math
Resumen:		Probleama 1: Programa que determina la ecuación de la recta (por medio 
                de minimos cuadrados, y = ax + b) que mejor se ajusta a una lista de da-
                tos acerca de los precios del combustible por galón semanalmente. Apar-
                tir de dicha ecuación, se puede predecir el valor del precio del combus-
                tible en las siguientes semanas. 
*/

// librerías
#include <stdio.h>
#include <math.h>

// inicialización de arreglos
float semana[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // contiene el número de semanas 
// contiene el precio del combustible correspondiente a la semana
float precio[] = {20.20, 20.90, 20.60, 21.30, 21.75, 22.05, 23.62, 22.95, 23.80, 24.00};

// nos da el tamaño del arreglo 
int n = sizeof(semana)/sizeof(semana[0]);

// prototipado de funciones
float suma(float datos[]);
float sumaMultip(float datos1[], float datos2[]);
float coefA(float x[], float y[]);
float coefB(float x[], float y[], float a);
float prediccion(float a, float b);

void main()
{
    // declaración de variables
    float a, b;
    
    // imprime encabazado: # de Semana| Precio del combustible
    printf("Semana| Precio (Q por galon)|\n");
    for (int i = 0; i <= 9; i++) // imprime los datos de la tabla
        printf("%4d%15.2f\n", (int) semana[i], precio[i]);
    
    //  calcula los coeficientes a y b de la ecuación (y = ax + b)
    a = coefA(semana, precio);
    b = coefB(semana, precio, a); 
    
    // imprime la ecuación 
    printf("\nEcuacion de la recta: \ny = %fx + %f\n\n", a, b);

    // hace una predicción acerca del precio del combustible
    printf("%d%s%s\n", (int) prediccion(a, b),
        " semanas aproximadamente tendran que pasar para que el precio del combustible",
        " alcance su limite maximo de Q30.00 por galon.");

} // fin del main

// función (1) suma los elementos de un arreglo
float suma(float datos[])
{
    float suma = 0;
    
    for (int i = 0; i < n; i++)
        suma += datos[i];
    
    return suma;
}

// función (2) suma el producto de los elementos de dos arreglos
float sumaMultip(float datos1[], float datos2[])
{
    float suma = 0;
    
    for (int i = 0; i < n; i++)
        suma += datos1[i] * datos2[i];

    return suma;
}

// función (3) calcula el coeficiente a = pendiente de la recta
float coefA(float x[], float y[])
{
    return ((n*sumaMultip(x, y)) - (suma(x)*suma(y)))/(n*sumaMultip(x, x)-(suma(x)*suma(x)));
}

// funcion (4) calcula el coeficiente b
float coefB(float x[], float y[], float a)
{
    return (suma(y)- a*suma(x))/n;
}

// función (5) predice el número de semanas para que el
// combustible alcance un cierto precio
float prediccion(float a, float b)
{
    return (30 - b)/a;
}


