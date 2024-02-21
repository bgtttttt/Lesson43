#include <iostream>

using namespace std;

int* create(int size) {
	int* array = new int[size];
	return array;
}
void destroy(int* array) {
	delete[] array;
}
int* test1() {
	int a = 100;
	return &a;
}
int* test2() {
	int* a = new int;
	*a = 100;
	return a;
}
int* test3() {
	static int a = 100;
	return &a;
}
void test(double n) {
	n * 10;
}

int main() {
	int* pa = test3();
	cout << *pa << "\n" << test3 << "\n";

	sin(10);
	cos(100);
	test(10.5);
	test(20.4);
	test(30.3);

	cout << *pa;


	return 0;
}