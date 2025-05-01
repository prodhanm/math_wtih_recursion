#include <iostream>
using namespace std;

int sum(int num) {
	if (num == 0) {
		return 0;
	}
	else if (num > 0) {
		return num + sum(num - 1);
	}
	else {
		return num + sum(num + 1);
	}
}

int diff(int num) {
	if (num == 0) {
		return 0;
	}
	else if (num > 0) {
		return num - sum(num - 1);
	}
	else {
		return num - sum(num + 1);
	}
}

void main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	int total = sum(num);
	int diffTotal = diff(num);
	printf("Total: %d\n" , total);
	printf("Difference: %d\n", diffTotal);
}

