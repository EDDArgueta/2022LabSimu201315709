/*
Autor:		 Edwin Argueta
Fecha:		 Sat May 14 12:49:13 CST 2022
Compilador:	 gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Compilar:	 gcc -o Punteros.out Punteros.c
Librerías:	 stdio
Resumen:	 Ejemplo de un puntero.	
*/

// librerías
# include <stdio.h>

int main()
{
    int n = 75;
    int* p = &n; // inicialización: tipo* nombreVariable = valor. Variable puntero, tiene dirección de n
    char c;
    char *pc; // declaración: tipo *nombreVeriable.
    c = '0';
    pc = &c;
    
    printf("n = %d, n = %d, &n = %p, p = %p\n", n, *p, &n, p);
    printf("&p = %p\n", &p);
    
    for (c = 'A'; c <= 'Z'; c++)
        printf("El valor es %c, en la direccion %p\n", c, pc);

    return 0;
} // fin del main
