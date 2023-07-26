#include <iostream>
int main() {
	setlocale(LC_ALL, "ru");
	int rr;
	std::cin >> rr;
	switch (rr)
	{
	case 5: std::cout << "rr is 5"; break;
	case 15: std::cout << "rr is 15"; break;
	default: std::cout << "default"; break;
	}
	return 0;
}