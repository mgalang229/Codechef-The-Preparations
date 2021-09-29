#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int m, n, k;;
		cin >> m >> n >> k;
		// check if the total minutes of the season is STRICTLY less than 'm'
		cout << (n * k < m ? "YES" : "NO") << '\n';
	}
	return 0;
}
