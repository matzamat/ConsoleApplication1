#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;

class PC
{
public:
	PC(int diagonal, string os) {
		this->diagonal = diagonal;
		this->os = os;
	}
	void get_info() {
		cout << "OS: " << os << ". Diagonal: " << diagonal;
	}
protected:
	int diagonal;
	string os;
};

class Laptop: public PC
{
public:
	Laptop(int diagonal, string os, float weight):PC(diagonal, os){
		this->weight = weight;
		//this->diagonal = diagonal;
	}
	void get_info() {
		PC::get_info();
		cout << " Weight: " << weight << endl;
	}
private:
	float weight;
};



int main() {
	setlocale(LC_ALL, "RU");

	Laptop mac(15, "Mac", 1.5f);
	mac.get_info();

	return 0;
}
