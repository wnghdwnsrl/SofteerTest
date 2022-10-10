#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);

	ios::sync_with_stdio(false);

	int T;
	cin >> T;
	
	int temp, temp2;

	for (int i = 0; i < T; i++) {
		cin >> temp >> temp2;
		cout << "Case #"<< i+1 <<": " << temp << " + " << temp2 << " = " << temp + temp2 << "\n";
	}


	return 0;
}