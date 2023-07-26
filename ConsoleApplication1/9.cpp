#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");

	char word[] = "Hi!"; //{ 'H','i', '!'};
	for (int i = 0; i < 3; i++)
	{
		cout << word[i];
	}
	//getline(cin, word);
	string words = "Hello World! Привет";
	cout << "\n" << words;
	words[0] = 'W';
	cout << "\n" << words << endl;
	cin >> words;
	cout << "New: " << words << endl;

	return 0;
}