#include <iostream>
using namespace std;

int main() {

	int n;
    int m;
    cin >> n >> m;
	int arr_2d[n][m] = {};

	int num = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr_2d[i][j] = num;
			num += 1;
		}
	}

	// 출력
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr_2d[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

}