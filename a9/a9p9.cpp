/*
CH-230-A
a9p9.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
using namespace std;

//determines maximum value and substracts it to all array values
void substract_max(int arr[], int n) {
	int i;
	int max = arr[0];
	//determining maximum
	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	//substracting max from all values
	for (i = 0; i < n; i++) {
			arr[i] = arr[i] - max;
			cout << "[" << arr[i] << "] ";
	}	
	cout << endl;
}

//deallocating memory from array
void deallocate(int arr[]) {
	delete[] arr;
}

int main() {
	int i, n;
	cout << "Number of elements: ";
	cin >> n;
	int* array = new int[n]; //dynamically allocating memory to array
	for(i = 0; i < n; i++) //inputting values in array
		cin >> array[i];
	substract_max(array, n);
	deallocate(array);
	
	return 0;
}
