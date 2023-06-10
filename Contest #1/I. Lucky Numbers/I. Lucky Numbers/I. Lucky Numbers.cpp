#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int x;cin >> x;
	int y = x % 10;
	int z = x / 10;
	if (y % z == 0 || z % y == 0)cout << "YES";
	else cout << "NO";
    return 0;
}

