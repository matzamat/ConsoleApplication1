#include <iostream>
#include <string>
using namespace std;

void minimal(int arr[], int len) {
	int min = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (min > *(arr + i)) min = *(arr + i);
	}
	cout << "Minimal: " << min << endl;
}

int main() {
	setlocale(LC_ALL, "RU");

	int arr[] = { 7,4,5,3,2 };

	minimal(arr, 5);

	return 0;
}
