#include <iostream>
#include <string>
using namespace std;
class build
{
public:
	
	void get_info() {
		cout << "Type: " << type << ". Year: " << year << endl;
	}
	void set_data(int y, string t) {
		year = y;
		type = t;
	}
	build();
	~build();

private:
	int year;
	string type;
};

build::build()
{
}

build::~build()
{
}

int main() {
	setlocale(LC_ALL, "RU");

	build school;
	//school.type = "Школа";
	//school.year = 2000;
	school.set_data(2000,"Школа");
	school.get_info();

	build house;
	//house.type = "Дом";
	//house.year = 2010;
	house.set_data(2010, "Дом");
	house.get_info();

	return 0;
}