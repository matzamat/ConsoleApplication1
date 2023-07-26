#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");

	/*for (int i = 100; i >= 10; i-=15)
	{
		cout <<"El: " << i << endl;

	}*/
	/*float j = 100;
	while (j>60)
	{
		cout << "El: " << j << endl;
		j/=1.2f;
	}*/
	int k = 100;
	do
	{
		cout << "El: " << k << endl;
		k -= 10;
	} while (k>10);

	return 0;
 }