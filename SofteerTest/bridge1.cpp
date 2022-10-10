#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int N;
	vector<int> rocks;
	int max_rocks_array[3000];

	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		rocks.push_back(temp);
	}
	int max_height;

	for (int j = 0; j < N-1; j++) {
		int max_num = 0;
		for (int k = j; k < N-1; k++) {
			if (rocks.at(k) < rocks.at(k + 1)) {
				max_num += 1;
			}
		}
		max_rocks_array[j] = max_num;
	}

	return 0;
}