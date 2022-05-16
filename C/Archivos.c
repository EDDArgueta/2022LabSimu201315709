/*
Autor:		 Edwin Argueta
Fecha:		 Sun May 15 11:27:01 CST 2022
Compilador:	 gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Compilar:	 gcc -o Archivos.out Archivos.c
Librerías:	 stdio
Resumen:	 Ejemplo simple de archivos.
*/

// librerías
# include <stdio.h>

int main()
{
    // declaracion de variables
    int c; // caracter para el ingreso de datos
    int dato = 0; // contador
    FILE* pf; // puntero a FILE
    char *salida = "salida.txt"; // forma sencilla de escribir el nombre del archivo 
    
    if ((pf = fopen(salida, "wt")) == NULL) 
    {
        puts("Error de escritura");
        return 1; // error al ejecutar el programa
    }
    
    puts("Escribir algo: ");
    while ((c = getchar()) != EOF && dato < 10)
    {
        if ((c) != '\n')
        {
            putc(c, pf);
            dato++;
            printf("Caracter %d\n", dato);
        }   
    }
    
    fclose(pf);
    return 0;
} // fin del main
