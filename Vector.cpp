#include <iostream>
#include <string>
#include "Vector.hpp"

Vector::Vector() { // Constructor
    dim = 3;
    for (int i = 0; i < dim; ++i) {
        component[i] = 0;
    } 
}

Vector::Vector(int dim) {
    SetDimension(dim);
}

void Vector::SetDimension(int dim) {
    if (dim < 1 || dim > MAXDIM) 
        throw std::string("Valor fuera de rango");

    this->dim = dim;
}

int Vector::GetDim() const{
    return dim;
}

void Vector::InputVector() {
    for (int i = 0; i < dim; ++i) {
        std::cin >> component[i];
    }
}

void Vector::PrintVector() const{
    std::cout << "<";
    for (int i = 0; i < dim; ++i) {
        std::cout << component[i] << ", ";
    }
    std::cout << "\b\b>" << std::endl;
}

Vector Vector::operator+(Vector v) const{
    if (dim != v.dim)
        throw std::string("Dimensiones incompatibles");

    Vector resultSum(dim);
    for (int i = 0; i < dim; ++i) {
        resultSum.component[i] = component[i] + v.component[i];
    }
    return resultSum;
}

Vector Vector::SubstractVector(Vector v) const{
    if (dim != v.dim)
        throw std::string("Dimensiones incompatibles");

    Vector resultSub(dim);
    for (int i = 0; i < dim; ++i) {
        resultSub.component[i] = component[i] - v.component[i];
    }
    return resultSub;
}

Vector Vector::operator*(double scalar) const{
    Vector resultScalar(dim);
    for (int i = 0; i < dim; ++i) {
        resultScalar.component[i] = component[i] * scalar;
    }
    return resultScalar;
}

Vector Vector::operator*(Vector v) const{
    if (dim != v.dim)
        throw std::string("Dimensiones incompatibles");

    Vector resultDot(dim);
    for (int i = 0; i < dim; ++i) {
        resultDot.component[i] = component[i] * v.component[i];
    }
    return resultDot;
}

// Funciones externas

Vector operator*(double scalar, Vector v) {
    Vector resultScalar(v.dim);
    for (int i = 0; i < resultScalar.dim; i++)
    {
        resultScalar.component[i] = scalar * v.component[i];
    }
    
}