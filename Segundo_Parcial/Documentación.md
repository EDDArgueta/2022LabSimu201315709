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

### Metodología y abstracción del problema
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

### Gráfica de y = 445515x + 19.666667
![Grafica1](/Segundo_Parcial/Imagenes/Grafica1.png)


## Problema 2
Utilizando un método numérico, encuentre una raíz de la ecuación "f(x) = 2 + cos (e^x - 2)- e^x".
Debe de realizar la gr´afica de la ecuación y comparar el resultado obtenido con el programa realizado en C.

### Metodología y abstracción del problema
El problema se decidió que iba a ser resuelto por el método de Newton-Raphson. Ya que este método se basa en utilizar la siguiente fórmula:


![FórmulaNR](/Segundo_Parcial/Imagenes/formulaNR.png)

Era necesario construir las siguientes tres funciones:

- float f(float x): encargargada de valuar la funcion f(x) para cualquier valor que se le pasara como argumento. Sirve como función base para la función metodoNR.
- float fDerivada(float x): encargargada de valuar la derivada de f(x) anterior para cualquier valor que se le pasara como argumento. Sirve como función base para la función metodoNR.
- void metodoNR(float x0, float tolerancia, int maxIteraciones): era el método numérico como tal, aplicado para calcular la raíz aproximada acorde al valor de los argumentos.

Una vez establecido las funciones necesarias para realizar los cálculos, se procedió a escribir el seudocódigo para ser implementado en el programa. Dentro del seudocódigo está detallado sobre cómo funciona el método de Newton-Raphson.

![Problema2](/Segundo_Parcial/Imagenes/Seudocodigo2.png)

Variables de entrada:
- x0: primera aproximación de la raíz dada por el usuario
- tolerancia: determina el número de decimales con  la que se desea hacer la aproximación
- iteraciones: número de veces que se desea hacer la aproximación

Variables de salida:
- raíz: contiene el valor de la respuesta en caso de que se encontrase la cero aproximado acorde a las variables de entradas
- iteración: variable que sirve como contador para mostrar el número de iteraciones realizadas durante los cálculos

NOTA: el valor de la respuesta depende del valor que se les de a las variables de entrada. Por lo general, es mejor escoger un x0 cercano a 1 (tal y como se puede apreciar en la grafica de f(x)) para que el programa pueda encontrar una raíz aproximada.

### Gráfica de f(x) = 2 + Cos(e^x -2) - e^x
![Grafica2](/Segundo_Parcial/Imagenes/Grafica2.png)

