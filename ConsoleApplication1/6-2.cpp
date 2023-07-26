#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");

	srand(time(NULL));
	int rn = 1 + rand() % 15;
	bool s = false;
	int ui;
	cout << rn << endl;
	do
	{
		cout << "Enter number: ";
		cin >> ui;
		if (ui != rn)
			cout << "Не угадал" << endl;
		else
		{
			s = true;
			cout << "Угадал" << endl;
		}
	} while (!s);

	return 0;
}