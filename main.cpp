#include <iostream>
#include "Vector.hpp"

int main(){
    try {

        Vector v,w,sum;

        std::cout << "Programa para la suma de dos vectores de dimensión 3" << std::endl;

        std::cout << "Capturando las " << v.GetDim() << " del primer vector" << std::endl;
        v.InputVector();    

        std::cout << "Capturando las " << v.GetDim() << " del segundo vector" << std::endl;
        w.InputVector();

        sum = v.operator+(w);
        sum = v + w; // Primer operando es el objeto que llama al operador (llamada implícita)
        
        // Imprimir la suma de los vectores
            std::cout << std::endl;
            v.PrintVector();
            std::cout << " + ";
            w.PrintVector();
            std::cout << " = ";
            sum.PrintVector();

        // Imprimir el producto escalar de los vectores
            std::cout << std::endl;
            std::cout << "Ingrese el escalar para el producto escalar: ";
            double scalar;
            std::cin >> scalar;
            std::cout << scalar << " * ";
            v.PrintVector();
            std::cout << " = ";
            (v * scalar).PrintVector();        
        
        // Imprimir el producto escalar operador externo
            std::cout << std::endl;
            std::cout << "Ingrese el escalar para el producto escalar: ";
            double scalar;
            std::cin >> scalar;
            std::cout << scalar << " * ";
            v.PrintVector();
            std::cout << " = ";
            (scalar * v).PrintVector();

        }

    catch(const char *msn) {
        std::cerr << '\n';
    }

}
