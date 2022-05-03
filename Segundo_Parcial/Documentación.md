# Segundo examen parcial
Dentro de esta carpeta se documentará y mostrará el código de los problemas corresponientes al número de carnet finalizado en 9 del parcial.

## Problema 1
Se elabora un estudio del comportamiento de los precios del combustible tipo regular, asumiendo que
estos tiene un comportamiento lineal y en base a la tabla de datos:

![](/Segundo_Parcial/Imagenes/DatosPrecioComb.png)

Le solicitan que genere un programa el cual cumpla con las siguientes condiciones:
- Una gráfica que compare los valores tabulados y la recta que mejor aproxima el comportamiento.

- Asumiendo que el gobierno tiene un tope de 30 quetzales por galón, determine en cuánto tiempo se
llegará a ese tope si el precio mantiene este comportamiento.

### Metodología
Para poder predecir en cuánto tiempo el precio del combustible alcanzaría el precio límite, era necesario conocer la ecuación de la recta "y = ax + b". Donde el valor de los coeficientes a (m = pendiente) y b, podían ser determinados mediante las siguientes fórmulas:

![Coeficientes](/Segundo_Parcial/Imagenes/coef.png)

Una vez obtenida la ecuación, se podría proceder a encontrar el valor varible independiente x (el tiempo) para cuando la variable dependiente y (precio del combustible) sea igual al precio límite de Q30.00. Una vez sabido que era lo que se necesitaba para resolver el problema, se escribió el seudocódigo que sería inplementado en el programa.

![Problema1](/Segundo_Parcial/Imagenes/Seudocodigo1.png)

Variables de entrada:
- a: primer coeficiente (pendiente) de la ecuación de la recta
- b: segundo coeficiente de la ecuación de la recta
- semana: primer arreglo que contiene los datos correspondientes al número de semanas
- precio: segundo arreglo que contiene los datos correspondientes al precio del combustible
- n: determina el número de elementos presentes en un arreglo 

#### Funciones utilizadas
Se crearon cinco funciones para calcular el valor de los coeficientes a y b y para poder hacer la predicción. De las cuales dos de esas funciones sirvieron como base para crear las otras tres. Las dos funciones base tenían como papel calcular la suma de los elementos de un arreglo y la suma del producto de los elementos de dos arreglos respectivamente.

![FuncionesBásicas](/Segundo_Parcial/Imagenes/funciones1y2.png)

Con estas dos funciones se construyeron las otras tres funciones que harían los cálculos para obtener los coeficientes según las fórmulas mostradas en la segunda imágen y otra para que hiciera el cálculo de "x = (y-b)/a".

![FuncionesDerivadas](/Segundo_Parcial/Imagenes/funciones34y5.png)

Una vez escrito y compilado el programa se obtuvo que los valores de los coeficientes eran:

- a: 445515
- b: 19.666667

Respuesta:
En 23 semanas el precio del combustible alcanzará su precio tope de Q30.00 por galón. 

### Grafica de y = 445515x + 19.666667
![Grafica1](/Segundo_Parcial/Imagenes/Grafica1.png)


## Problema 2
![Problema2](/Segundo_Parcial/Imagenes/Seudocodigo2.png)


Variables de entrada:
- x0: primera aproximación de la raíz dada por el usuario
- tolerancia: determina el número de decimales con  la que se desea hacer la aproximación
- iteraciones: número de veces que se desea hacer la aproximación

### Grafica de f(x) = 2 + Cos(e^x -2) - e^x
![Grafica2](/Segundo_Parcial/Imagenes/Grafica2.png)

