#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N=0;
	
	cin >> N;
	
	double A=0;
	vector<double> v;
	for (int i = 0; i < N; i++) {
		cin >> A;
		
		v.push_back(A);
	}
	
	double max_num = *max_element(v.begin(), v.end());

	for (int j = 0; j < N; j++) {
		v[j] = v[j] * 100 / max_num;
	}

	double average = accumulate(v.begin(), v.end(), 0.0 );
	cout << fixed;
	cout.precision(4);
	cout << average/ v.size();
	
	return 0;

}