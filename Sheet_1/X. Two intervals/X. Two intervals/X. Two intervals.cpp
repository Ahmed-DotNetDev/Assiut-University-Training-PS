#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	if (l2 >= l1 && l2 <= r1) {
		if (r2 >= r1) {
			cout << l2 << " " << r1;
		}
		else if (r2 <= r1) {
			cout << l2 << " " << r2;
		}
	}
	else if (l1 >= l2 && l1 <= r2) {
		if (r1 >= r2) {
			cout << l1 << " " << r2;
		}
		else if (r1 <= r2) {
			cout << l1 << " " << r1;
		}
	}
	else
		cout << -1;
    return 0;
}

