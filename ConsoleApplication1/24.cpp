#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;
template <typename T, typename T2>
void print_arr(T* arr, int len) {
	for (T2 i = 0; i < len; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "RU");

	int arr1[] = { 1,2,3,4,5,6,7 };
	print_arr<int, int>(arr1, 7);

	float arr2[] = { 1.23f,2.34f,3.45f };
	print_arr<float, int>(arr2, 3);
	return 0;
}
