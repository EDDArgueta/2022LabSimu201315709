/*
Autor:		 Edwin Argueta
Fecha:		 Sat May 7 16:54:19 CST 2022
Compilador:	 gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Compilar:	 gcc -o Problema1.out Problema1.c
Librerías:	 stdio
Resumen:	 Programa que muestra los elementos de un arreglo (números pares del 2 al 20) de 
             forma ascendente o descendente.
*/

// librerías
#include <stdio.h>

int main()
{
    // declaración de variable
    char opcion;
    // inicialización del arreglo
    int arreglo[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    
    // indicador para el usario
    printf("%s\n%s\n%s\n",
        "Este programa muestra los numeros pares del 2 al 20.",
        "Ingrese la opcion 'a' si desea ver los numeros de forma 'ascendente'.",
        "Ingrese la opcion 'd' si desea ver los numeros de forma 'descendente'.");
    
    do
    {   // pide la entrada
        printf("Ingrese una opcion: ");
        fflush(stdin); scanf("%c", &opcion); fflush(stdin); 

        if (opcion != 'a' && opcion != 'd')
            printf("\nLa opcion ingresada es incorrecta. ");
        
    }while (opcion != 'a' && opcion != 'd'); // itera de forma indefinida mientras la opción sea incorrecta

    // si la opción es a
    if (opcion == 'a')
    {   
        for (int i = 0; i < 10; i++) 
            printf("%d\n", arreglo[i]); // imprime de forma ascendente
    } else if (opcion == 'd') // si la opción es d
    {   
        for (int i = 9; i >= 0; i--)
            printf("%d\n", arreglo[i]); // imprime de forma descendente
    }
    
    return 0;
} // fin del main