/*
CH-230-A
Vector.h
Erlisa Kulla
e.kulla@jacobs-university.de
*/

using namespace std;

class Vector
{
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
    double* getVector();
    //print
    void print() const;
    //operation vectors
    Vector sum(const Vector) const;
    Vector diff(const Vector) const;
    double norm();
    double scalProd(const Vector) const;
};
