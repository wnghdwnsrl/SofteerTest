#include<iostream>
#include<vector>

using namespace std;

int self_num(int num) {
	int result = num;
	do {
		result += (num % 10);
		num /= 10;
	} while (num > 0);

	return result;
}

int main() {
	vector<int> v;
	for (int i = 0; i < 10000; i++) {
		v.push_back(i+1);
	}

	for (int i = 0; i < 10000; i++) {
		int index = self_num(i+1);
		if (index <= 10000) {
			v[index-1] = 0;
		}
	}

	for (int j = 0; j < 10000; j++) {
		if (v[j] != 0) {
			cout << v[j]<<"\n";
		}
	}
	return 0;
}