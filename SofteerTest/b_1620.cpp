#include<iostream>
#include<map>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int N,M=0;
	string str;
	map<string, int> pokemon;
	map<int, string> pokemon2;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> str;
		pokemon.insert(pair<string, int>(str, i + 1));
		pokemon2.insert(pair<int, string>(i + 1, str));
	}
	for (int i = 0; i < M; i++) {
		cin >> str;
		if (str[0] < 'A') {
			int temp=stoi(str);
			cout << pokemon2[temp] << '\n';
		}
		else {
			cout << pokemon[str] << '\n';
		}
	}

	return 0;
}