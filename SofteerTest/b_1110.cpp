#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	
	int N;
	cin >> N;

	int ten_num, one_num;
	int new_num = -1;
	int result=0;

	if (N < 10) {
		ten_num= 0;
		one_num = N;
	}
	else {
		one_num = N % 10;
		ten_num = N / 10;
	}
	
	while (N!=new_num) {
		new_num = 10*one_num + (one_num + ten_num)%10;
		if (new_num < 10) {
			ten_num = 0;
			one_num = new_num;
		}
		else {
			one_num = new_num % 10;
			ten_num = new_num / 10;
		}
		
		result += 1;
	}
	cout << result;

	return 0;

}