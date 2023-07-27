#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;

class Building
{
public:

	Building(int y, string t){
		set_data(y, t);
	}
	Building(){}
	Building(int y) {
		year = y;
		cout << "Данные установленны." << endl;
	}

	void set_data(int year, string type) {
		this->year = year;
		this->type = type;
	}

	void get_info() {
		cout << "Type: " << type << ". Year: " << year << endl;
	}

	~Building() {
		cout << "Delete object" << endl;
	}

private:
	int year;
	string type;
};


int main() {
	setlocale(LC_ALL, "RU");

	Building school(2000, "Школа");
	school.get_info();

	Building house(2010);
	house.get_info();


	return 0;
}
