/*
Autor:		Edwin Argueta
Fecha:		Sun May 8 18:33:25 CST 2022
Compilador:	gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Compilar:	gcc -o Problema3.out Problema3.c -lm
Librerías:	stdio y math
Resumen:	Programa que recibe como entradas las componentes (x,y,z) de dos vecotes y realiza
            las sig. operaciones entre vectores: (a) magnitud de c/vector, (b) suma de vectores,
            (c) producto escalar y (d) producto vectorial.
*/

// librerías
#include <stdio.h>
#include <math.h>

#define n 3 // tamaño del vector

// prototipado de funciones
void mostrarVec(float v[]); // muestra las componentes del vector
float magnitud(float v[]); // magnitud de un vector
void suma(float v1[], float v2[]); // suma vectorial
float productoEsc(float v1[], float v2[]); // producto escalar
void productoVec(float v1[], float v2[]); // producto vectorial

int main()
{
    // declaración de vectores
    float vec1[n], vec2[n];
    
    // indicador para el usuario
    puts("Este programa realiza operaciones basicas entre vectores de tres componentes (x,y,z).");
    printf("Ingrese las componentes del primer vector: "); 
    scanf("%f%f%f", &vec1[0], &vec1[1], &vec1[2]); // recibe las compentes del vector 1
    
    printf("Ingrese las componentes del segundo vector: ");
    scanf("%f%f%f", &vec2[0], &vec2[1], &vec2[2]); // recibe las compentes del vector 2
    
    // muestra las componentes del vector recién ingresado
    printf("El primer vector es: "); 
    mostrarVec(vec1);
    printf("\nEl segundo vector es: "); 
    mostrarVec(vec2);
    
    // muestra las magnitudes de los vectores
    printf("\nLa magnitud del primer vector es %.2f y la magnitud del segundo vector es %.2f\n", 
        magnitud(vec1), magnitud(vec2));

    // muestra la suma vectorial
    printf("La suma vectorial es: "); 
    suma((vec1), (vec2));

    // muestra el producto escalar
    printf("\nEl producto escalar entre los dos vectores es: %.2f", 
        productoEsc(vec1, vec2));
    
    // muestra el producto vectorial 
    printf("\nEl producto vectorial entre los dos vectores es: "); 
    productoVec(vec1, vec2);

    puts("");
    return 0;
}// fin del main

void mostrarVec(float v[])
{
    float vec[n];

    for (int i = 0; i < n; i++)
        printf("%.2f\t", vec[i] = v[i]);
}

float magnitud(float v[])
{
    double resultado;

    for (int i = 0; i < n; i++)
        resultado += pow((double) v[i], 2.0);

    return sqrt(resultado);       
}

void suma(float v1[], float v2[])
{
    float suma[n];

    for (int i = 0; i < n; i++)
        printf("%.2f\t", suma[i] = v1[i] + v2[i]);    
}

float productoEsc(float v1[], float v2[])
{
    float resultado;

    for (int i = 0; i < n; i++)
        resultado += (v1[i]*v2[i]);
    
    return resultado;
}

void productoVec(float v1[], float v2[])
{
    float v3[n];

    v3[0] = v1[1]*v2[2] - v1[2]*v2[1];
    v3[1] = v1[2]*v2[0] - v1[0]*v2[2];
    v3[2] = v1[0]*v2[1] - v1[1]*v2[0];

    for (int i = 0; i < n; i++)
        printf("%.2f\t", v3[i]);    
}