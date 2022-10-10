#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> Card;

    int temp, N,M;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        Card.push_back(temp);
    }

    sort(Card.begin(), Card.end());

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> temp;
        cout << binary_search(Card.begin(), Card.end(), temp) << ' ';
    }
    cout << '\n';

    return 0;
}