#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;
template <class T>
class arrays
{
public:
	arrays(T* a, int len) {
		this->len = len;
		arr = new T[len];
		for (int i = 0; i < len; i++)
		{
			*(arr + i) = *(a + i);
		}
	}
	void get() {
		for (int i = 0; i < len; i++)
		{
			cout<< *(arr + i)<< " ";
		}
		cout << endl;
	}
	~arrays() {
		delete[] arr;
	}

private:
	int len;
	T* arr;
};


int main() {
	setlocale(LC_ALL, "RU");

	int arr1[] = { 3,4,5 };
	arrays<int> obj1(arr1, 3);
	obj1.get();

	float arr2[] = { 3.5f,4.5f,5.5f };
	arrays<float> obj2(arr2, 3);
	obj2.get();
	
	return 0;
}