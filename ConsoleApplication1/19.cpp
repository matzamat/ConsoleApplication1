#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;

class Building
{
public:
	void set_data(int y, string t) {
		year = y;
		type = t;
	}

	void get_info() {
		cout << "Type: " << type << ". Year: " << year << endl;
	}

private:
	int year;
	string type;
};


int main() {
	setlocale(LC_ALL, "RU");

	Building school;
	//school.type = "Школа";
	//school.year = 2000;
	school.set_data(2000, "Школа");
	school.get_info();

	Building house;
	//house.type = "Дом";
	//house.year = 2010;
	house.set_data(2010, "Дом");
	house.get_info();


	return 0;
}
