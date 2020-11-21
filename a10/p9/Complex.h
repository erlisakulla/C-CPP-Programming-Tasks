/*
CH-230-A
Complex.h
Erlisa Kulla
e.kulla@jacobs-university.de
*/

using namespace std;

class Complex {
private:
    double real;
    double imaginary;
public:
    //constructors
    Complex();
    Complex(double, double);
    Complex(Complex& );
    //destructor
    ~Complex();
    //setters
    void setReal(double newreal);
    void setImaginary(double newimaginary);
    //getters
    double getReal();
    double getImaginary();
    //print
    void print();
	//operations
    void conjugate();
    Complex sum(Complex complex);
    Complex dif(Complex complex);
    Complex prod(Complex complex);
};
