#include <iostream>

using namespace std;
/*
int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int arr[10001] = { 0 };
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		arr[num] += 1;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << '\n';
		}
	}
	delete arr;
}
*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int N;
	cin >> N;

	int input[10001] = { 0 };

	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		input[in] += 1;
	}

	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < input[i]; j++) {
			cout << i << '\n';
		}
	}
}