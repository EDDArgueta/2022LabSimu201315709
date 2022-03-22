#! /bin/bash

<< 'Header'
Autor:			    Edwin Argueta
Fecha:			    08/03/2022
Tipo de archivo:    Script de Bash
Ejecución:	        ./filegen.sh
Resumen:		    Genera header para archivos de programación en lenguaje C.
Header

# Bienvenida
echo "**** Generador de Archivos de C****"
# obtener y validar el nombre del archivo
read -p "Ingrese nombre del archivo: " nombre

# evalúa si la varible nombre tiene contenido 
if [ -z $nombre ]; then
    echo "El nombre ingresado no es valido"
    exit 2
fi

fnombre=$nombre".c"

# evalúa si el archivo ya existe
if [ -e $nombre ]; then
    echo "El archivo con ese nombre ya existe"
    exit 2
fi

salida=$nombre".out"
fecha=$(date)
version=$(gcc --version|head -n1)

# crea el contenido del header 
echo "/*" > $fnombre
echo "Autor:		Edwin Argueta" >> $fnombre
echo "Fecha:		" $fecha >> $fnombre
echo "Compilador:	" $version >> $fnombre
echo "Compilar:		gcc -o" $salida $fnombre >> $fnombre
echo "Librerías:	" stdio >> $fnombre
echo "Resumen:		" >> $fnombre
echo "*/" >> $fnombre
echo ""	>> $fnombre
echo "// librerías"	  >> $fnombre
echo "# include <stdio.h>">> $fnombre
echo "Archivo realizado con éxito"


