#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int alice_max = 0;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			alice_max = max(alice_max, a);
		}
		int m;
		cin >> m;
		int bob_max = 0;
		for (int i = 0; i < m; i++) {
			int b;
			cin >> b;
			bob_max = max(bob_max, b);
		}
		if (alice_max > bob_max) {
			cout << "Alice\nAlice\n";
		} else if (alice_max < bob_max) {
			cout << "Bob\nBob\n";
		} else {
			cout << "Alice\nBob\n";
		}
	}
	return 0;
}
