#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll   x, y, z, s;
	cin >> x >> y >> z >> s;
	long long int mul = ((x % 100) * (y % 100) * (z % 100) * (s % 100));
	if (mul % 100 < 10)
	{
		cout << 0 << mul % 100;
	}
	else
	{
		cout << mul % 100;
	}
    return 0;
}

