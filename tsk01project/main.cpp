#include <iostream>
#define DEFAULT_SIZE 10
using namespace std;

int main() {
	int allay[DEFAULT_SIZE];

	for (int i = 0; i < DEFAULT_SIZE; i++) {
		allay[i] = rand() % 101;

	}

	for (int i = 0; i < DEFAULT_SIZE; i++) {
		cout << allay[i] << " ";
	}

	return 0;
}
