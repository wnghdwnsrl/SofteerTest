#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N, X;
	
	cin >> N >> X;

	int A;

	for (int i = 0; i < N; i++) {
		cin >> A;
		if (A < X) {
			cout << A<<" ";
		}
	}


	return 0;
}