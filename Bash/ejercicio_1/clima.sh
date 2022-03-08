#! /bin/bash

# Obtiene informacion del clima en Guatemala y la copia en un archivo
curl wttr.in/Guatemala >> climaGuate.txt

# muestra las primeras siete lineas del archivo recien creado
head -n7 climaGuate.txt

# borra el archivo
rm  climaGuate.txt
