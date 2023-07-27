#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void divide(float a, float b) {
	if (b == 0)throw 11;
	cout << (a / b);
}

int main() {
	setlocale(LC_ALL, "RU");
	try
	{
		divide(111.3f, 1.0f);
	}
	catch (int err)
	{
		if (err == 11) cout << "Ошибка при делении на ноль";
	}
	

	return 0;
}
