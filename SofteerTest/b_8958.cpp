#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

int main() {
	int T;
	cin >> T;
	string A;
	
	for (int i = 0; i < T; i++) {
		cin >> A;
		int score = 0;
		int result = 0;
		for (int j = 0; j < A.size(); j++) {
			if (A[j] == 'O') {//따옴표는 작은것이 문자, 큰 따옴표가 문자열을 나타낸다.
				score += 1;
				result = result + score;
			}
			else {
				score = 0;
			}
		}
		cout << result << "\n";
	}
	return 0;
}