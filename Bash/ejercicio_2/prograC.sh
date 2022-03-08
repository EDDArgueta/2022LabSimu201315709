#! /bin/bash

# variables
nombre=""
usario=$(whoami)
version=$(gcc --version)
fecha=$(date)

header="/*\nAutor: $usuario\nCompilador: $version\nCompilado: (como se debe compilar)
	gcc nombreDelPrograma.c -o nombreDelPrograma\nFecha: $fecha\nLibrerias: stdio, (otras)\n
	Resumen: (vacio)\nEntrada: (vacio)\nSalida: (vacio)\n*/\n\n// Librerias\n# include <hstdio.h>\n
	// numerar los pasos del pseudocodigo"

# pide el nombre del archivo
read -p "Escriba el nombre: " nombre

# evalua si la variable nobre esta vacia
if [[ -z $nombre ]]; then # no hace nada
    exit 0
elif [[ -n $nombre ]]; then # de lo conntrario crea el nombre.c 
    touch $nombre.c
    echo -e $header >> $nombre.c
    vim $nombre.c
fi
