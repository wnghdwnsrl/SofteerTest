#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>
#include<cmath>


using namespace std;


int main() {
	int T;
	double temp;
	vector<double> N;
	
	cin >> T;

	for (int i = 0; i < T; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> temp;
			N.push_back(temp);
		}
		double average = accumulate(N.begin(), N.end(), 0);
		cout << "#" << i + 1 << " " << round(average/10) << "\n";
		N.clear();
	}
	
	return 0;
}