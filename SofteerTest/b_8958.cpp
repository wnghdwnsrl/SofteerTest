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
			if (A[j] == 'O') {//����ǥ�� �������� ����, ū ����ǥ�� ���ڿ��� ��Ÿ����.
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