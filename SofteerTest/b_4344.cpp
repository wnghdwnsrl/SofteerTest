#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio;

	int C, N;
	vector<int> Score;

	cin >> C;
	int temp;
	for (int j = 0; j < C; j++){

		cin >> N;

		for (int i = 0; i < N; i++) {
			cin >> temp;
			Score.push_back(temp);
		}
		double sum = std::accumulate(Score.begin(), Score.end(), 0.0);

		double mean = sum / Score.size();

		double result=0;
		for (int k = 0; k < N; k++) {
			if (Score[k] > mean)
			{
				result += 1;
			}
		}
		Score.clear();

		cout << fixed;
		cout.precision(3);
		cout << result*100/N<<"%"<<"\n";
	}
	return 0;
}