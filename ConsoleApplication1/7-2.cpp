#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");

	int mat[3][2] = {
		{1,2},
		{3,4},
		{5,6}
	};
	//cout << mat[1][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << mat[i][j] << endl;
		}
	}
	return 0;
}