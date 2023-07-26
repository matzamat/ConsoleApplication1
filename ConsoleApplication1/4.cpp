#include <iostream>

int main() {
	setlocale(LC_ALL, "ru");
	int A;
	std::cout << "Введите число А: ";
	std::cin >> A;
	bool isca = true;
	if (A == 3 && isca) {
		std::cout << "Число А равно 3";
	}
	else if (A==15) std::cout << "Число А равно 15";

	else std::cout << "Число А меньше 3";

	return 0;
}