/*
CH-230-A
testcity.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "City.h"

using namespace std;

int main() {
    City Bremen, Paris, London;//instantiating class
    int inhabitants;
    string mayor; 
	string city1 = "Bremen";
	string city2 = "London";
	string city3 = "Paris";
    double area;
   
    cout << "Input city data:" << endl;

//setting the data for all cities
    //Bremen
    Bremen.setName(city1);
    cout << "\nBREMEN" << endl;
    cout << "Number of inhabitants: ";
    cin >> inhabitants;
    getchar();
    Bremen.setInhabitants(inhabitants);
    cout << "Mayor: ";
    getline(cin, mayor);
    Bremen.setMayor(mayor);
    cout << "Area: ";
    cin >> area;
    Bremen.setArea(area);

    //Paris
    Paris.setName(city2);
    cout << "\nPARIS" << endl;
    cout << "Number of inhabitants: ";
    cin >> inhabitants;
    getchar();
    Paris.setInhabitants(inhabitants);
    cout << "Mayor: ";
    getline(cin, mayor);
    Paris.setMayor(mayor);
    cout << "Area: ";
    cin >> area;
    Paris.setArea(area);

    //London
    London.setName(city3);
    cout << "\nLONDON" << endl;
    cout << "Number of inhabitants: ";
    cin >> inhabitants;
    getchar();
    London.setInhabitants(inhabitants);
    cout << "Mayor: ";
    getline(cin, mayor);
    London.setMayor(mayor);
    cout << "Area: ";
    cin >> area;
    London.setArea(area);

	cout << "\nCity data" << endl;

    //getter methods
    cout << endl;
    cout << "--BREMEN--" << endl;
    cout << "Name: " << Bremen.getName() << endl;
    cout << "Inhabitants: " << Bremen.getInhabitants() << endl;
    cout << "Mayor: " << Bremen.getMayor() << endl;
    cout << "Area: " << Bremen.getArea() << endl;

    cout << endl;
    cout << "--PARIS--" << endl;
    cout << "Name: " << Paris.getName() << endl;
    cout << "Inhabitants: " << Paris.getInhabitants() << endl;
    cout << "Mayor: " << Paris.getMayor() << endl;
    cout << "Area: " << Paris.getArea() << endl;

    cout << endl;
    cout << "--LONDON--" << endl;
    cout << "Name: " << London.getName() << endl;
    cout << "Inhabitants: " << London.getInhabitants() << endl;
    cout << "Mayor: " << London.getMayor() << endl;
    cout << "Area: " << London.getArea() << endl;

    return 0;
}
