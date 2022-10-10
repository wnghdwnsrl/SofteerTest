#include<iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int T = 0;

	cin >> T;
	int A, B;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << "Case #"<<i+1<<": " << A + B << "\n";
	}
	
	return 0;
}