#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");

	int nums[3];
	nums[0] = 56;
	nums[1] = 561;
	nums[2] = 6;
	nums[1] = 5;
	nums[1]++;

	//cout << nums[1];

	float nums2[3] = { 4, 2, 7};

	for (int i = 0; i < 3; i++)
	{
		cout << "El: " << i << ": " << nums2[i] << endl;
	}

	return 0;
}