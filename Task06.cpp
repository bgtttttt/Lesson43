#include <iostream>
#include <time.h>

using namespace std;


void createWithUniqElem(int* arr, int size, int start) {
	int* buff = new int[size];
	int index = 0;
	for (int i = 0; i < size; i++) {
		buff[i] = i+1;
	}
	for (int i = 0; i < size; i++) {
		while (buff[index] == 0) {
			int index = rand() % size;
		}
		arr[i] = start + buff[index];
		buff[index] = 0;
	}
}

int main() {
	srand(time(0));
	int size, start;
	cout << "input size and start value:\n";
	cin >> size >> start;
	int* array = new int[size];
	createWithUniqElem(array, size, start);
	for (int i = 0; i < size; i++) {
		cout << *(array+i) << " ";
	}

	return 0;
}
