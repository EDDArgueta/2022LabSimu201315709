/*
Autor:         Maynor Ballina
Fecha:         Tue Apr 26 20:18:54 CEST 2022
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o minimoscuadrados.out minimoscuadrados.c -lm
Librerias:     stdio, math
Resumen:       Ejemplo basico para aproximacion numerica de minimos cuadrados
*/

//librerias
#include <stdio.h>
#include <math.h>

//declaro e inicializo variables globales
float x[]={1,2,3,4,5,6}, y[]={60,100,150,210,260,290};
//medimos el tamanio del vector por medio del tamanio de los bytes que ocupa cada elemento
int n = sizeof(x)/sizeof(x[0]);

//prototipar funciones
void imprimir(float datos[]);
float suma(float datos[]);
float sumaMulti(float datos1[], float datos2[]);


void main(){
    //Se declaran las variables del problema
    float b, m, r;
    //imprimo los valores de los vectores para que el usuario sepa la informacion
    imprimir(x);
    imprimir(y);
    //los valores de ecuacion lineal, por medio de minimos cuadrados
    m = (n*sumaMulti(x,y)-(suma(x)*suma(y)))/(n*sumaMulti(x,x)-(suma(x)*suma(x)));
    b = (suma(y)-m*suma(x))/n;
    r = (n*sumaMulti(x,y)-(suma(x)*suma(y)))/sqrt((n*sumaMulti(x,x)-(suma(x)*suma(x)))*(n*sumaMulti(y,y)-(suma(y)*suma(y))));
    //imprime la ecuacion lineal
    printf("y = %fx + %f\n",m,b);
    //imprime coeificiente de determinacion el r cuadrado
    printf("Coeficiente de determinacion: %f\n",r*r);
}

//imprimir los datos del vector que ingrese a la funcion
void imprimir(float datos[]){
    puts("Valor de los datos");
    for (int i = 0; i < n; i++)
    {
        printf("%f ",datos[i]);
    }
    puts("\n");
}

//reliza la suma de los elementos de un vector ingresado
float suma(float datos[]){
    float resp = 0;
    for (int i = 0; i < n; i++)
    {
        resp += datos[i];
    }
    return resp;
}

//realiza la suma de los elementos de dos vectores ingresados
float sumaMulti(float datos1[], float datos2[]){
    float resp = 0;
    for (int i = 0; i < n; i++)
    {
        resp += datos1[i]*datos2[i];
    }
    return resp;
}