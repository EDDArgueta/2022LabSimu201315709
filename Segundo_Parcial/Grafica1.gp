unset label
clear
set terminal jpeg
set output "Recta.jpg"
set title "Prueba grafico"
set xlabel "Semana"
set ylabel "Precio (Q por galon)"
set grid
set style data boxplot
plot "DatosProblema1" 