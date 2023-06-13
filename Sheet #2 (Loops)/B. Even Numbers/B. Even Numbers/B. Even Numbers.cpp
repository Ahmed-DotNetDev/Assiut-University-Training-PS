#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >> n;
	if (n == 1 || n == 0)
	{
		cout << -1;
	}
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}
	
    return 0;
}

