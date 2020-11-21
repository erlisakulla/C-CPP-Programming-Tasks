/*
CH-230-A
Vector.h
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#ifndef _VECTOR_H
#define _VECTOR_H

#include <bits/stdc++.h>
#include "Matrix.h"

class Vector {
	private:
	    int size;
	    double* vector;
	public:
	    //constructors
	    Vector(); //default
	    Vector(const int, const double*); //parametric
	    Vector(const Vector&); //copy
	    //desctructor
	    ~Vector();
	    //setters
	    void setSize(const int);
	    void setVector(const double*);
	    //getters
	    int getSize();
	    double getVector(int);
	    //print
	    void print() const;
	    //operation vectors
	    Vector sum(const Vector) const;
	    Vector diff(const Vector) const;
	    double norm();
	    double scalProd(const Vector) const;
        //overloaded operators
        friend std::istream& operator >> (std::istream &in, Vector &);
        friend std::ostream& operator << (std::ostream &out, const Vector&);
        Vector operator * (Matrix&);
};

#endif
