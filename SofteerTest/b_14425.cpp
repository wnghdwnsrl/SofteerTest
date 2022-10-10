#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
	map<string, bool> Word;
	int N, M;
	string str;
	int result=0;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> str;
		Word.insert(pair<string, bool>(str, true));
	}

	for (int i = 0; i < M; i++) {
		cin >> str;
		if (Word[str] == true) {
			result++;
		}
	}
	cout << result << '\n';
	return 0;
}