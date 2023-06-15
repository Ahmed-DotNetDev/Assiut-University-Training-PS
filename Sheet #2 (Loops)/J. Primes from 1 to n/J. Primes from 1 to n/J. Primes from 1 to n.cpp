#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Speeding() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

bool isPrime(int n) {
	if (n == 1 || n == 0) return false;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main()
{
	Speeding();
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
	return 0;
}

