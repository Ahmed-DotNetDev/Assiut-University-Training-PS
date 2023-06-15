#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Speeding() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}
int main()
{
	Speeding();
	int n; cin >> n; //6      -=>1 2 3 4 5 6 
							//-=>1 2 3 6 
	for (int i = 1; i <=n; i++) {
		if (n % i == 0) {
			cout << i << endl;
		}
	}
	return 0;
}

