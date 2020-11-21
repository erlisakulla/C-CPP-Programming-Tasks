/*
CH-230-A
testbox.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

int main() {
    int n, i;
    double height, width, depth, volume;

    cout << "Number of boxes:\n";
    cin >> n;
    cout << endl;

    Box* box;
    box = new Box[2*n];	//dynamically allocating memory
	
	//setting box properties
    for (i = 0; i < n; i++) {
        cout << "BOX " << i + 1 << endl;
        cout << "Height: ";
        cin >> height;
        box[i].setHeight(height);
        cout << "Width: ";
        cin >> width;
        box[i].setWidth(width);
        cout << "Depth: ";
        cin >> depth;
        box[i].setDepth(depth);
        cout << endl;
    }

    for (i = n; i < 2*n; i++) {
        box[i] = Box(box[i-n]);
    } //copying the properties in the remaining n positions

    cout << "VOLUMES" << endl;

    //calculating the volumes of the boxes
    for (i = 0; i < 2 * n; i++) {
        cout << "Box " << i + 1 << ": ";
        height = box[i].getHeight();
        width = box[i].getWidth();
        depth = box[i].getDepth();
        volume = height*width*depth;
        cout << volume << endl;
    }

    delete[] box; //deallocating memory
    return 0;
}
