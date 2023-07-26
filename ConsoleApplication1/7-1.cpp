#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");

	float num[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter number: " << i << ": ";
		cin >> num[i];
	}
	/*for (int i = 0; i < 5; i++)
	{
		cout << "El: " << num[i] << endl;
	}*/
	float summ = 0;
	float min = num[0];
	for (int i = 0; i < 5; i++)
	{
		summ += num[i];
		if (num[i]<min)
		{
			min = num[i];
		}
	}
	cout << "Ñóììà: " << summ << endl;
	cout << "Min: " << min << endl;
	return 0;
}