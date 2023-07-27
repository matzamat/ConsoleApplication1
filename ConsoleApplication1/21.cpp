#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;

class car;

class person
{
public:
	friend void info_car(car& car, person& person);
	person(string name) {
		this->name = name;
	}
private:
	int age;
	string name;
};

class car
{
public:
	friend void info_car(car& car, person& person);
	car(string name) {
		this->name = name;
	}
private:
	string name;
};

void info_car(car& car, person& person) {
	cout << "������� � ������: " << person.name << " ����� ������ " << car.name << endl;
}

int main() {
	setlocale(LC_ALL, "RU");

	car bmw("BMW");
	person jhon("jhon");
	info_car(bmw,jhon);
	return 0;
}
