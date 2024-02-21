#include <iostream>

using namespace std;

void change(int* number) {
	*number *= 2;
}

int main() {
	int num = 15;

	cout << "Before: " << num << "\n";
	change(&num);
	cout << "After: " << num << "\n";

	return 0;
}