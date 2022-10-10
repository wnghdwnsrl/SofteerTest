#include<iostream>


using namespace std;


int main() {
	int N;
	cin >> N;
	if (N >= 1 && N <= 9) {
		for (int i = 1; i < 10; i++) {
			cout << "2 * " << i << " = " << 2 * i << endl;
		}
	}
	return 0;
}