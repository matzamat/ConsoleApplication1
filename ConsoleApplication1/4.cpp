#include <iostream>

int main() {
	setlocale(LC_ALL, "ru");
	int A;
	std::cout << "������� ����� �: ";
	std::cin >> A;
	bool isca = true;
	if (A == 3 && isca) {
		std::cout << "����� � ����� 3";
	}
	else if (A==15) std::cout << "����� � ����� 15";

	else std::cout << "����� � ������ 3";

	return 0;
}