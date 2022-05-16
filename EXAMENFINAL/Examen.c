/*
Autor:		 Edwin Argueta
Fecha:		 Mon May 16 09:35:41 CST 2022
Compilador:	 gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Compilar:	 gcc -o Examen.out Examen.c -lm
Librerías:	 stdio y math
Resumen:	 Programa que simula el movimiento vertical de cohetes. Determina
             la velocidad y altura en funcion del tiempo. 
*/

// librerías
# include <stdio.h>
# include <math.h>

// constantes para ecuaciones
#define G 6.693E-11
#define Rt 6.378E6
#define Mt 5.9737E24
#define R 287.06
#define L 6.5E-3
#define g0 9.81
#define T0 288.15
#define P0 101325

// Caracteristicas de cohetes
// Cohete 1: Ah Mun
#define E0_1 3E7
#define TSFC_1 3.248E-4
#define CD_1 61.27 // para cohetes 1 y 2
#define A_1 201.06 // para cohetes 1 y 2
#define m0_1 1.1E5 // para cohetes 1 y 2
#define mf0_1 1.5E6 // para cohetes 1 y 2
// Cohete 2: Ahau Kin
#define E0_2 2.7E7
#define TSFC_2 2.248E-4 // para cohetes 2 y 3
// Cohete 3: Chac
#define E0_3 2.5E7
#define CD_3 70.25
#define A_3 215.00
#define m0_3 1.8E5
#define mf0_3 2.1E6

#define n 6 // tamaño del vector

// protipado de funciones 
void mostrarCarac(float arreglo[]); // muestra caracteristicas del cohete
float masaCohete(float m0, float mf);
float masaFuel(float mf0 , float tsfc, float empuje, float tiempo);
float gravedad(float altura);
float fuerzaAtm(float densidad, float cd, float area, float velocidad);
float densidad(float altura);
float aceleracion(float empuje, float masaC, float fuerzaAtm, float gravedad);
float velocidad(float aceleracion, float tiempo);
float posicion(float aceleracion, float tiempo);

int main()
{
    // arreglos que contienen caracteristicas de c/u de los cohetes
    float cohete1[] = {E0_1, TSFC_1, CD_1, A_1, m0_1, mf0_1};
    float cohete2[] = {E0_2, TSFC_2, CD_1, A_1, m0_1, mf0_1};
    float cohete3[] = {E0_3, TSFC_2, CD_3, A_3, m0_1, mf0_3};

    // masas del combustible de cada cohete al inicio
    float mf1 = mf0_1;
    float mf2 = mf0_1;
    float mf1 = mf0_3;
    // condiciones iniciales
    float t = 0, h = 0.09, delta = 0.1, e01 = 3E7, e02 = 2.7E7, e03 = 2.5E7;  
    // otras variables
    float mf, hmax, hmin;
    
    // muestra caracteristicas del cohete
    printf("Nombre del cohete 1: Ah Mun\n");
    mostrarCarac(cohete1);

    printf("Nombre del cohete 2: Ahau Kin\n");
    mostrarCarac(cohete2);

    printf("Nombre del cohete 3: Chac\n");
    mostrarCarac(cohete3);

    // iteracion para encontrar altura max, tiempo cuando el combust = 0
    // y cuando impacta en el suelo para cada cohete
    while (h >= 0)
    {
        
        // evalua cuando se acaba la masa del combustible
        if ((mf = masaFuel(mf0_1, TSFC_1, e01, t)) == 0)
        {
            printf("\nEl tiempo cuando la masa del combustible es cero es t: %.2f", t);
            e01 = 0;
        }
        
        // evalua cuando la altura es maxima
        if ((hmax = posicion(e01, t)) == 0)
        {
            printf("\nEl tiempo cuando la altura es maxima es t: %.2f", t);
        }

        // evalua cuando impacta el cohete con el suelo (h=0)
        if ((hmin = posicion(e01, t)) == 0)
        {
            printf("\nEl tiempo cuando el cohete impacta con el suel es t: %.2f", t);
        }
        
        t += delta;
    }
    
    return 0;
} // fin del main 

void mostrarCarac(float arreglo[])
{
    for (int i = 0; i < 6; i++)
    {
        switch (i)
        {
            case 0:
                printf("Empuje del cohete E0: %f.\n", arreglo[i]);
                break;
            case 1:
                printf("Consumo especifico del empuje TSFC: %f.\n", arreglo[i]);
                break;
            case 2:
                printf("Coeficiente de forma CD: %f.\n", arreglo[i]);
                break;
            case 3:
                printf("Seccion transversal del cohete A: %f.\n", arreglo[i]);
                break;
            case 4:
                printf("Masa del propulsor m0: %f.\n", arreglo[i]);
                break;
            case 5:
                printf("Masa inicial del combustible mf0: %f.\n", arreglo[i]);
                break;
        }
    }   
} // fin del main

// funciones:
// masa del combustible
float masaFuel(float mf0 , float tsfc, float empuje, float tiempo)
{
    float mf1;
    return mf1 = mf0 - (tiempo)*(tsfc*empuje);
}

// masa del cohete
float masaCohete(float m0, float mf)
{
    float masaC;
    return masaC = m0 + mf;
}

// gravedad g(y)
float gravedad(float altura)
{
    float g;
    return g = pow((G*Mt)/(Rt + altura), 2);
}

// fuerza de friccion debido a la atmosfera
float fuerzaAtm(float densidad, float cd, float area, float velocidad)
{
    float fuerza;
    return fuerza = (0.5*densidad*cd*area*velocidad*fabs(velocidad));
}

// densidad del aire
float densidad(float altura)
{
    float rho;
    return rho = (P0/(R*T0))*(pow((1-((L*altura)/T0)), g0/(R*L)));
}

// aceleracion del cohete
float aceleracion(float empuje, float masaC, float fuerzaAtm, float gravedad)
{
    float aceleracion;
    return aceleracion = (empuje/masaC) - (fuerzaAtm/masaC) - gravedad;
}

// velocidad del cohete
float velocidad(float aceleracion, float tiempo)
{
    float velocidad;
    return velocidad = aceleracion*tiempo;
}

// posicion de la altura del cohete
float posicion(float aceleracion, float tiempo)
{
    float posicion;
    return posicion = 0.09 + (aceleracion*tiempo);
}