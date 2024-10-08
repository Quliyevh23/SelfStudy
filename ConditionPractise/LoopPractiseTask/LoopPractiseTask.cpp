#include <iostream>

using namespace std;

int main() {
	int sum = 0;
	int num = 0;

	for (int i = 0; i < 10; i++) {
		sum++;
		cout << sum << endl;
	}

	do {
		num += 3;
	} while (num != 3);
	cout << num;

}