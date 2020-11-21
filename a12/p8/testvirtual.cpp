#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
const int num_obj = 7;
int main() {
	Area *list[num_obj];						// (1)
	int index = 0;								// (2)
	double sum_area = 0.0;						// (3)
	
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
	
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	
	cout << "Creating Square: ";
	Square brown_square("BROwN", 25);	
	
	list[0] = &blue_ring;						// (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &brown_square;
	
	while (index < num_obj) {					// (7)
		(list[index])->getColor();				
		double area = list[index++]->calcArea();// (8)
		sum_area += area;
	}
	
	cout << endl;
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)
	return 0;
}

/*
Class relation diagram

		     AREA
			|    \
		Circle  Rectangle
		   |      \
         Ring    Square

*/

/*
1) creating an array of area objects and allocating it a 
memory of 6

2) declaring an int index to which is used in the while loop 
to loop through the array of areas

3) initializing the total sum of the areas as 0 so in the 
while loop it each area will be added to give the total sum

4) using a parametric constructor to initialize a Ring class
instance with 3 properties

5) assigning all the initialized objects to specific indeces
of the array

6)

7) looping through each index of the array using a while loop
the index value increases by in each loop while the num_obj
remains constant as declared on top

8) accessing the areas of the objects in a specific index
of the array by pointing -> at the calcArea() method

9) printing the total sum of the areas of the objects of the 
array as calculated by the while loop
*/
