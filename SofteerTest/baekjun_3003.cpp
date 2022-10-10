#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	vector<int> chess_unit;

	for (int i = 0; i < 6; i++) {
		int temp_unit;
		cin >> temp_unit;
		chess_unit.push_back(temp_unit);
	}

	vector<int> chess_unit_sample = { 1, 1, 2, 2, 2, 8 };

	for (int j = 0; j < 6; j++) {
		cout << chess_unit_sample[j] - chess_unit[j] << " ";
	}


	return 0;
}