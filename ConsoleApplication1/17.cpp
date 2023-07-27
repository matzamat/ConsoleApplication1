#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;



int main() {
	setlocale(LC_ALL, "RU");
	
	string str1 = "Hello";
	string str2 = " World";

	str1.append(str2);
	str1.pop_back();
	str1.resize(5);
	str1.push_back('!'); 
	cout << str1 << " - " << str1.length() << endl;

	cout << pow(2, 5) << endl;
	cout << abs(-7) << endl;
	cout << sin(1) << endl;
	cout << cos(1) << endl;
	cout << sqrt(16) << endl;
	cout << ceil(7.01f) << " - " << floor(1.89f) << " - " << round(1.51f) << endl;

	return 0;
}
