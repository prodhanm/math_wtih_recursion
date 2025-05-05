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

int multi(int num) {
	if (num == 1) {
		return num;
	}
	else if (num > 1) {
		return num * multi(num - 1);
	}
	else if (num != 0 && num < 0) {
		return num * multi(num + 1);
	}
}

int div(int num) {
	if (num != 0 and num == 1) {
		return num;
	}
	else if (num > 1) {
		return (double)(num / div(num - 1));
	}
	else if (num != 0 && num < 0) {
		return (double)(num / div(num + 1));
	}
}

void main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	int total = sum(num);
	int diffTotal = diff(num);
	int product = multi(num);
	int quotient = div(num);
	printf("Total: %d\n" , total);
	printf("Difference: %d\n", diffTotal);
	printf("Product: %d\n", product);
	// Check for division by zero
	if (num == 0) {
		printf("Cannot divide by zero\n");
		return;
	}
	else {
		printf("Quotient: %d\n", quotient);
	}
}

