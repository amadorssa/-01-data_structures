#ifndef VECTOR_HPP_INCLUDED
#define VECTOR_HPP_INCLUDED

#include <iostream>


class Vector {
    friend Vector operator*(double scalar, Vector v); // Producto escalar de dos vectores
public: // accessible to all
    Vector(); // Constructor predeterminado

    Vector(int dim); // Constructor con dimensión especificada

    int GetDim() const; // Obtener la dimensión del vector

    void InputVector(); // Ingresar valores al vector desde la entrada estándar

    void PrintVector() const; // Imprimir el vector en la salida estándar

    Vector operator+(Vector v) const; // Sumar dos vectores y devolver el resultado

    Vector SubstractVector(Vector v) const; // Restar dos vectores y devolver el resultado

    Vector operator*(double scalar) const; // Producto escalar de dos vectores

    Vector operator*(Vector v) const; // Producto punto de dos vectores

    Vector NormVector() const; // Norma de un vector

protected: // accessible to derived classes and this class
private: // accessible only within this class
    // Establecer la dimensión del vector
    void SetDimension(int dim);

    // Datos miembro
    int dim;
    static const int MAXDIM = 50; // Uso de constante miembro en lugar de macro
    double component[MAXDIM];
};

#endif // VECTOR_HPP_INCLUDED
