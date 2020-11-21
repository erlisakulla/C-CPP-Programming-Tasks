/*
CH-230-A
testvector.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include "Vector.h"
#include <iostream>

using namespace std;

int main() {
    //creating 5 vector instances
	Vector v1, v2, v3, v4, v5;
	
	double a1[3] = {2.0, 6.0, 1.0};
	double a2[3] = {4.0, 2.0, 3.0};
	double a3[3] = {1.0, 2.0, 3.0};
	
    //using parameters
    v1 = Vector(3, a1);
    //using setters
    v2.setSize(3);
    v2.setVector(a2);
	//using parameters
    v3 = Vector(3, a3);
    //copying v1 to v4
    v4 = Vector(v1);
    //using default constructor
    v5 = Vector();
    
    cout << "Our vectors: " << endl;
    cout << "V1 = ";
	v1.print();
    cout << "V2 = ";
	v2.print();
    cout << "V3 = ";
	v3.print();
    cout << "V4 = ";
	v4.print();
    cout << "V5 = ";
	v5.print();

    cout << "\nTheir norms:" << endl;;
    cout << "V1 = " << v1.norm() << endl;
    cout << "V2 = " << v2.norm() << endl;
    cout << "V3 = " << v3.norm() << endl;
    cout << "V4 = " << v4.norm() << endl;
    cout << "V5 = " << v5.norm() << endl;

	cout << "\nSome scalar products: " << endl;
	cout << "V1 * V2 = ";
    cout<< v1.scalProd(v2) << endl;
    cout << "V1 * V4 = ";
    cout<< v1.scalProd(v4) << endl;
    cout << "V2 * V3 = ";
    cout<< v3.scalProd(v2) << endl;
    cout << "V2 * V4 = ";
    cout<< v4.scalProd(v2) << endl;

    cout << "\nSome vector sums: " << endl;
    cout << "V1 + V3 = ";
    (v1.sum(v3)).print();
    cout << "V2 + V3 = ";
    (v2.sum(v3)).print();
    cout << "V1 + V4 = ";
    (v4.sum(v1)).print();

    cout << "\nSome vector differences: " << endl;
    cout << "V1 - V3 = ";
    (v1.diff(v3)).print();
    cout << "V3 - V4 = ";
    (v3.diff(v4)).print();
    cout << "V1 - V4 = ";
    (v1.diff(v4)).print();
	
    return 0;
}
