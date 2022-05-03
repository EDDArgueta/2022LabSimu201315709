/*
Autor:		    Edwin Argueta
Fecha:		    Sat Apr 30 18:35:05 CST 2022
Compilador:	    gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Compilar:       gcc -o Problema2.out Problema2.c -lm
Librerías:	    stdio y math
Resumen:		Este programa calcula la raíz aproximada de la función f(x) = 2 + Cos(e^x - 2) - e^x 
                utilizando el método numérico de Newton-Raphson.
*/

// librerías
# include <stdio.h>
# include <math.h>

// prototipado de funciones
float f(float x);
float fDerivada(float x);
void metodoNR(float x0, float tolerancia, int maxIteraciones);

int main()
{
    // declaración de variables
    float x0;
    float tolerancia;
    int iteraciones;

    // indicador para el usuario
    printf("%s%s", "Este programa calcula la raiz aproximada de la funcion\n",
        "<<f(x) = 2 + Cos(e^x - 2) - e^x>>\n\n");
    printf("Ingrese el valor inicial aproximado de x: ");
    scanf("%f",&x0);
    printf("Ingrese el valor de la tolerancia: ");
    scanf("%f",&tolerancia);
    printf("Ingrese el numero de iteraciones que desee que realice el programa: ");
    scanf("%d",&iteraciones);

    // emplea el método de NewtonRaphson para obtener la raíz más precisa 
    metodoNR(x0, tolerancia, iteraciones);
    
    return 0;
} // fin del main

// evalúa la función f(x) con el valor de x0
float f(float x)
{
    // f(x) = 2 + Cos(e^x - 2) - e^x
    return 2 + cos(exp(x) - 2) - exp(x);  
}

// evalúa la derivada de la función con el valor de x0
float fDerivada(float x)
{
    //  D[f(x)] = e^x(-Sin(e^x - 2)- 1)
    return exp(x)*(-sin(exp(x) - 2) - 1);  
}

// método numérico Newton-Raphson
void metodoNR(float x0, float tolerancia, int maxIteraciones)
{
    float x; // siguiente aproximación
    float raiz; // valor del cero aproximado (respuesta)
    float error; 
    int iteracion = 1; // contador

    do
    {
        // evalúa si el contador es menor al max número
        // de iteraciones definido con anterioridad
        if (iteracion > maxIteraciones)
        {  
            printf( // de ser así imprime:
                "Sobrepaso el numero de iteraciones permitidas. No hay solucion despues de %d iteraciones.\n", 
                iteracion);
            break;
        } else
        {   
            x = x0 - f(x0)/fDerivada(x0); // calcula la siguiente aproximación de x 
            error = fabs(x - x0);

            // evalúa si el error es menor o igual a la tolerancia
            if (error <= tolerancia)
            {
                raiz = x; // x es la raíz buscada de la función
                printf( // imprime la respuesta
                    "La raiz de la funcion f(x) despues de %d iteraciones es %f\n", 
                    iteracion, raiz);
                break;
            } else
            {   
                x0 = x;  
                iteracion++;
            }
        }
    } while (1);
}





