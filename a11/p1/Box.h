/*
CH-230-A
Box.h
Erlisa Kulla
e.kulla@jacobs-university.de
*/

using namespace std;

class Box {
    private:
        double height;
        double width;
        double depth;
    public:
        //constructors
        Box();
        Box(const double, const double, const double);
        Box(const Box&);
        //destructor
        ~Box();
        //setters
        void setHeight(const double newheight);
        void setWidth(const double newwidth);
        void setDepth(const double newdepth);
        //getters
        double getHeight();
        double getWidth();
        double getDepth();
};
