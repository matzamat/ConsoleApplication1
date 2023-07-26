#include <iostream>
#include <string>
using namespace std;

void print(string word) {
	cout << word << endl;
}
void print(int word) {
	cout << word << endl;
}
void add(int a, int b) {
	int res = (a + b);
	print(res);
}
void add(int a, int b, int y) {
	int res = (a + b + y);
	print(res);
}
int main() {
	setlocale(LC_ALL, "RU");

	print("Some");
	add(5, 6);
	add(5, 6, 4);

	return 0;
}
