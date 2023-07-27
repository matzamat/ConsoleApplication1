#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;
class person;
class dog
{
public:
	friend class person;
private:
	int health = 100;
};

class person
{
public:
	void damage(dog& dog) {
		dog.health -= 20;
		cout << "Health of animal: " << dog.health << endl;
	}
	void heal(dog& dog) {
		dog.health += 10;
		cout << "Health of animal: " << dog.health << endl;
	}
	void kill(dog& dog) {
		dog.health = 0;
		cout << "Health of animal: " << dog.health << endl;
	}

private:

};


int main() {
	setlocale(LC_ALL, "RU");

	dog skuby;
	person alex;
	alex.damage(skuby);
	alex.damage(skuby);
	alex.heal(skuby);
	alex.heal(skuby);
	alex.heal(skuby);
	alex.kill(skuby);
	return 0;
}
