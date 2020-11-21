/*
CH-230-A
Vector.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <bits/stdc++.h>
#include "Vector.h"
#include "Matrix.h"

using namespace std;

////----Constructors----///
 
//default constructor
Vector::Vector() {
    size = 0;
    vector = 0;
}
 
//parametric constructor
Vector::Vector(const int newsize, const double* newvector) {
    size = newsize;
    vector = new double[size];//dynamically allocating memory
    for (int i = 0; i < size; i++)
        vector[i] = newvector[i];
}
 
//copy constructor
Vector::Vector(const Vector& src) {
    size = src.size;
    vector = new double[size]; //dynamically allocating memory
    //looping for each element to be copied
    for(int i = 0; i < size; i++)
        vector[i] = src.vector[i];
}
 
//destructor
Vector::~Vector() {
    delete[] vector;//deallocating memory
}
 
///----Setters and getters----///
 
//setters
void Vector::setSize(const int newsize) {
    size = newsize;
    vector = new double[size];
}
 
void Vector::setVector(const double* newvector) {
    for (int i = 0; i < size; i++)
        vector[i] = newvector[i];
}
 
//getters
int Vector::getSize() {
    return size;
}
 
double Vector::getVector(int n) {
    return vector[n];
}
 
//print
void Vector::print() const {
    for (int i = 0; i < size; i++) {
        cout << "[" << vector[i] << "] ";
    }
    cout << endl;
}
 
///----Operations with vectors----///
 
//calculating the sum vector
Vector Vector::sum(const Vector newvector) const {
    Vector sum_vector; //variable to store the new sum vector
    sum_vector.setSize(size); //setting vector size
    for (int i = 0; i < size; i++){
        sum_vector.vector[i] = vector[i] + newvector.vector[i];
    } 
    sum_vector = Vector(size, sum_vector.vector);
    
	return sum_vector; //returning the sum vector
}
 
//calculating the difference
Vector Vector::diff(const Vector newvector) const {
    Vector diff_vector; //variable to store the new difference vector
    diff_vector.setSize(size); //setting vector size
    for (int i = 0; i < size; i++) {
         diff_vector.vector[i] = vector[i] - newvector.vector[i];
    }
    diff_vector = Vector(size, diff_vector.vector);
    
	return diff_vector; //returning the difference vector
}
 
//calculating the norm
double Vector::norm() {
    double norm, sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += (vector[i] * vector[i]);    
    } //calculating sum of squares 
    norm = sqrt(sum);
    
	return norm; //returning norm
}
 
//calculating scalar product
//double Vector::scalProd(const Vector newvector) const {
//    double scal_prod = 0;
//    for (int i = 0; i < size; i++)
//        scal_prod += vector[i] * newvector.vector[i];
//    
//	return scal_prod;
//}

///----Overloaded operators----///

//input
istream& operator >> (istream &in, Vector &v) {
	in >> v.size;
    v.vector = new double[v.size];
    //inputting coordinates of the vector
    for(int i = 0; i < v.size; i++) {
        in >> v.vector[i];
    }
    
	return in;
}

//output
ostream& operator << (ostream &out, const Vector &v) {
	for(int i = 0; i < v.size; i++) {
        out << v.vector[i] << " ";
    }
    
	return out;
}

//vector * matrix
Vector Vector::operator * (Matrix &m) {
    if(size == m.getRow()) {
        double* vector = new double[m.getCol()];
        for(int i = 0; i < m.getRow(); i++) {
            vector[i] = 0;
            for(int j = 0; j < size; j++) {
                vector[i] = vector[i] + vector[j]*m.getMatrix(j, i);
            }
        }
        return Vector(m.getCol(), vector);
    }
    else {
        return Vector();
    }
}
