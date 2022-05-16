/*
Autor:		 Edwin Argueta
Fecha:		 Sun May 15 17:17:55 CST 2022
Compilador:	 gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Compilar:	 gcc -o LeerArchivo.out LeerArchivo.c
Librerías:	 stdio
Resumen:	 Ejemplo simple para leer los datos de un archivo de texto.	
*/

// librerías
# include <stdio.h>

int main()
{
    // declaracion de variables
    int c, n = 0;
    FILE* pf;
    char *nombre = "salida.txt";
    
    // si hay un problema con fopen(), devuelve un NULL
    if ((pf = fopen(nombre, "rt")) == NULL)
    {
        puts("ERROR EN LA OPERACION DE APERTURA");
        return 1;
    }
 
    while ((getc(pf)) != EOF)
    {
        if (c == '\n')
        {
            n++; printf("\n");
        }
        else
            putchar(c);   
    }
    
    printf("\nNumero de lineas del archivo: %d\n", n);
    fclose(pf);
    return 0;
} // fin del main
