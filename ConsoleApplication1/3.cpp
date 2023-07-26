#include <iostream>
int main() {
	setlocale(LC_ALL, "RU");
	int num = 45;
	num = 3;
	std::cout << "Переменная " << num << std::endl;
	int a, b;
	std::cout << "Переменная a: ";
	std::cin >> a;
	std::cout << "Переменная b: ";
	std::cin >> b;
	std::cout << "a: " << a << ". b: " << b;

	short num1 = 7;
	int num2 = 5;
	long num3 = 3;
	unsigned short num4 = 7;
	unsigned int num5 = 5;
	unsigned long num6 = 3;
	float num7 = 0.12123f;
	double num8 = 0.124322f;
	char sus = '$';
	bool ishappe = true;



	return 0;
}