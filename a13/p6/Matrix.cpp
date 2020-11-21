/*
CH-230-A
Matrix.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "Vector.h"
#include "Matrix.h"

using namespace std;

//default constructor
Matrix::Matrix() {
    row = 0;
    col = 0;
}

//destructor
Matrix::~Matrix() {
    for(int i = 0; i < row; i++) {
        delete [] matrix[i];
    }
}

//getters
int Matrix::getRow() {
    return row;
}

int Matrix::getCol() {
    return col;
}

int Matrix::getMatrix(int r, int c) {
    return matrix[r][c];
}

//overloaded operators

//input
istream& operator >> (istream &in, Matrix &a) {
    in >> a.row;
    in >> a.col;
    a.matrix = new double*[a.row];
    for(int i = 0; i < a.row; i++) {
        a.matrix[i] = new double[a.col];
        
        for(int j = 0; j < a.col; j++) {
            in >> a.matrix[i][j];
        }
    }
    
    return in;
}

//output
ostream& operator << (ostream &out, Matrix &a) {
    for(int i = 0; i < a.row; i++) {
        for(int j = 0; j < a.col; j++) {
            out << a.matrix[i][j] << " ";
        }
        out << endl;
    }
    
    return out;
}

//matrix * vector
Vector Matrix::operator * (Vector &a) {
    if(col == a.getSize()) {
        double *vector = new double[row];
        for(int i = 0; i < row; i++) {
            vector[i] = 0;
            for(int j = 0; j < col; j++) {
                vector[i] = vector[i] + a.getVector(j)*matrix[i][j];
            }
        }
        return Vector(row, vector);
    }
    else {
        return Vector();
    }
}
