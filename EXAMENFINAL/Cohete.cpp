/*
Autor:		 Edwin Argueta
Fecha:		 Mon May 16 13:45:39 CST 2022
Compilador:	 g++ (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Compilar:    g++ -o Problema2.out Problema2.cpp
Librerías:	 iostream
Resumen:	 estructura de la clase cohete: atributos	
*/

// librerías
# include <iostream>

class Cohete
{
    // caracteristicas del cohete
    float nombre, e0, tsfc, cd, seccionA, m0, mf0;
     
    public: // muestra las caracteristicas de cada cohete
        void mostrarCarac(float, float, float, float, float, float, float);
};

// metodo mostrar caracteristicas
Cohete::mostrarCarac(float nombre, float e0, float tsfc, float cd, float seccionA, float m0, float mf0);
{
    //imprime caracteristicas
    cout <<nombre<<"/"<<e0<<"/"<<tsfc"/"<<cd<<"/"<<seccionA<<"/"<<m0<<"/"<<mf0;
}

int main()
{
    // instanciar objetos
    Cohete cohete1;
    Cohete cohete2;
    Cohete cohete3;

    cout << "Las caracteristicas del cohete 1 son: ";
    cohete1.mostrarCarac(3E7,3.248E-4,61.27, 201.06, 1.1E5,1.5E6);
    cout << "Las caracteristicas del cohete 2 son: ";
    cohete1.mostrarCarac(2.7E7,2.248E-4,61.27,201.06,1.1E5,1.5E6);
    cout << "Las caracteristicas del cohete 3 son: ";
    cohete1.mostrarCarac(2.5E7,2.248E-4,70.25,215.00,1.8E5,2.1E6);
    return 0;
}



