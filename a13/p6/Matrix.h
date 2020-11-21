/*
CH-230-A
Matrix.h
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include "Vector.h"
#ifndef _MATRIX_H
#define _MATRIX_H

class Vector;

class Matrix {
private:
    int row, col;
    double **matrix;
public:
    // default constructor
    Matrix();
    //destructor
    ~Matrix();
    //setters
    void setRow();
    void setCol();
    void setMatrix();
    // getters
    int getRow();
    int getCol();
    int getMatrix(int, int);
    // overloaded operators
    friend std::istream& operator >> (std::istream &in, Matrix&);
    friend std::ostream& operator << (std::ostream &out, Matrix&);
    Vector operator * (Vector&);
};

#endif
