#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int rer = 1 + rand() % 20;
	cout << rer << endl;
	/*float n1, n2, n3;
	std::cout << "����� ����� n1: ";
	std::cin >> n1	;
	std::cout << "����� ����� n2: ";
	std::cin >> n2;
	char math;
	std::cout << "����� ��� ������: ";
	std::cin >> math;*/
	/*if (math == '+') n3 = n1 + n2;
	else if (math == '-') n3 = n1 - n2;
	else if (math == '*') n3 = n1 * n2;
	else if (math == '/') n3 = n1 / n2;
	else std::cout << "������ ";*/
	/*switch (math)
	{
	case'+': n3 = n1 + n2; break;
	case'-': n3 = n1 - n2; break;
	case'*': n3 = n1 * n2; break;
	case'/': n3 = n1 / n2; break;
	default: n3 = 0; std::cout << "������ "; break;
	}

	std::cout << "�����: " << n3 << std::endl;*/
	/*int a = 10, b = 3, z;
	z = a % b;
	cout << z << endl;
	a += 5;
	cout << a << endl;
	a++;
	cout << a << endl;*/

	return 0;
}