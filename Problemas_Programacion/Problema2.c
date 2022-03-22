/*
Autor:          Edwin Argueta
Fecha:		    Tue Mar 22 16:14:46 CST 2022
Compilador:	    gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0
Compilar:	    gcc -o Problema2.out Problema2.c
Librerías:	    stdio
Resumen:		Programa que lee una cantidad indeterminada de números positivos
                y a partir de ellos determina y muestra la media aritmética, el 
                valor máximo y mínimo. 
*/

// librerías
# include <stdio.h>

int main() 
{
    // declaración e inicialización de variables
    double x;
    double max;
    double min;
    int n = 0;
    double med = 0;

    // indicador para el usuario
    printf("%s\n%s\n%s\n%s\n", 
        "Este programa recibe un numero indeterminado de numeros positivos",
        "y a partir de ellos calcula y muestra la media aritmetica, el valor ",
        "maximo y el valor minimo. Ingrese un numero las veces que desee.",
        "Para terminar ingrese un numero negativo.");
    printf("Ingrese un numero: ");
    scanf("%lf",&x);

    // se asume en un inicio que max y min valen x
    max = x;
    min = x;

    // itera de forma indeterminda mientras el
    // valor de x sea mayor o igual que cero
    while (x >= 0)
    {
        n++;
        med += x;

        if (x > max)
        {
            max = x;
        } else if (x < min)
        {
            min = x;
        }
        
        // vuelve a pedir otro número
        printf("Ingrese un numero: ");
        scanf("%lf",&x);
    }

    // evalúa si el total de entradas es cero
    if (n == 0)
    {  // de ser así imprime:
        printf("El valor ingresado era negativo.\n");
    } else
        printf(
            "La media aritmetica es %.2f, el valor maximo es %.2f y el valor minimo es %.2f.\n",
            med/n, max, min);

    return 0;
} // fin del main