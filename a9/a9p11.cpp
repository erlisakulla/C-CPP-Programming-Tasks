/*
CH-230-A
a9p11.cpp
Erlisa Kulla
e.kulla@jacobs-university.de
*/

#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(string &s) {
	int i;
	int flag = 0; //palindrome check
	int length = s.length();
	//comparing characters with the reverse position
	for(i = 0; i < length; i++){
        if(s[i] != s[length-i-1]){
            flag = 1;
            break;
		}
	}
	//determining return type
	if (flag == 0)
		return true;
	else
		return false;
}

int main() {
	string word;
	bool flag = false; //exit check

	while(!flag) {
		cout << "Enter a word:\n";
		cin >> word;
		//exiting program at user command
		if (word == "exit") {
			flag = true;
			break;
		}

		if (isPalindrome(word) == true)
			cout << "The word is a palindrome." << endl;
		else
			cout << "The word is NOT a palindrome." << endl;
	}

	return 0;
}
