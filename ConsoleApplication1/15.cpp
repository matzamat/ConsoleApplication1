#include <iostream>
#include <string>
#include <fstream>
using namespace std;

enum pit
{
	open=4,
	close,
	wait,
	del
};

struct file
{
	float weight;
	string name;
	pit options;
};

int main() {
	setlocale(LC_ALL, "RU");

	file myfile;
	myfile.weight = 1.5f;
	myfile.name = "ter.txt";
	myfile.options = pit::close;

	//cout << myfile.options;
	if (myfile.options == pit::close)
		cout << "file is close" << endl;

	return 0;
}
