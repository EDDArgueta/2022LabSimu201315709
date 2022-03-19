#! /bin/bash

: << 'Header'
Autor:			Edwin Argueta
Fecha:			08/03/2022
Tipo de archivo:	Script de Bash
Ejecucion:		./filegen.sh
Resumen:		Generea header para archivos de programacion en lenguaje C.
Header

# bienvenida
echo "**** Generador de Archivos de C****"
# obtener y validar el nombre del archivo
read -p "Ingrese nombre del archivo: " nombre

# evalua si la varible nombre tiene contenido 
if [ -z $nombre ]; then
    echo "El nombre ingresado no es valido"
    exit 2
fi

fnombre=$nombre".c"

# evalua si el archivo ya existe
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
echo "Compilar		gcc -o" $salida $fnombre >> $fnombre
echo "Librerias:	" stdio >> $fnombre
echo "Resumen:		" >> $fnombre
echo "*/" >> $fnombre
echo ""	>> $fnombre
echo "// librerias"	  >> $fnombre
echo "# include <stdio.h>">> $fnombre
echo "Archivo realizado con exito"


