#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Point
{
	int x, y;

};

struct tree
{
	string name;
	int	ages;
	bool is_alive;
	float height;
	Point place;

	void get_info() {
		cout << "Name: " << name << ". Age: " << ages;
	}
};

int main() {
	setlocale(LC_ALL, "RU");

	tree dub;
	dub.name = "Фѓс";
	dub.ages = 25;
	dub.place.x = 100;
	dub.place.y = 10;

	tree yelka;
	yelka.name = "Хыър";
	yelka.ages = 5;
	yelka.place.x = 50;
	yelka.place.y = 15;


	//cout << dub.name << " - " << yelka.name;

	dub.get_info();
	yelka.get_info();
	return 0;
}
