/*
CH-230-A
Vector.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include "Vector.h"
#include <iostream>
#include <cmath>

using namespace std;

///----Constructors----///

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

double* Vector::getVector() {
    return vector;
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
    sum_vector.setSize(this->size); //setting vector size
    for (int i = 0; i < this->size; i++){
    	sum_vector.vector[i] = this->vector[i] + newvector.vector[i];
	} 
    sum_vector = Vector(this -> size, sum_vector.vector);
    return sum_vector; //returning the sum vector
}

//calculating the difference
Vector Vector::diff(const Vector newvector) const {
    Vector diff_vector; //variable to store the new difference vector
    diff_vector.setSize(this->size); //setting vector size
    for (int i = 0; i < this->size; i++) {
    	 diff_vector.vector[i] = this->vector[i] - newvector.vector[i];
	}
    diff_vector = Vector(this -> size, diff_vector.vector);
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
double Vector::scalProd(const Vector newvector) const {
    double scal_prod = 0;
    for (int i = 0; i < this -> size; i++)
        scal_prod += this -> vector[i] * newvector.vector[i];
    return scal_prod;
}
