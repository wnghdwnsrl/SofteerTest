#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int Rock_num=0;
	vector<int> height;

	cin >> Rock_num;
	for (int i = 0; i < Rock_num; i++) {
		int temp=0;
		cin >> temp;
		height.push_back(temp);
	}
	int max_num_i= max_element(height.begin(),height.end())-height.begin();
	int max_num = 1;
	int max_height = height.front();
	cout << max_height << endl;
	for (int j = 1; j < max_num_i+1; j++) {
		if (max_height < height.at(j)) {
			max_num += 1;
			max_height = height.at(j);
			cout << max_num << max_height << endl;
		}
	}
	max_height = height.back();
	int max_num_2 = 1;
	for (int j = Rock_num-1; j > max_num_i-1; j--) {
		if (height.at(j - 1) > height.at(j)) {
			max_num_2 += 1;
			max_height = height.at(j-1);
			cout << max_num_2 << max_height << endl;
		}
		
	}
	cout << max_num + max_num_2 - 1;
	return 0;
}