#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int a, b, c;

	cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		if (b >= c)
		{
			cout << c << endl << b << endl << a << endl << endl;
			cout << a << endl << b << endl << c;

		}
		else
		{
			cout << b << endl << c << endl << a << endl << endl;
			cout << a << endl << b << endl << c;
		}
	}
	else if (b >= a && b >= c)
	{
		if (a >= c)
		{
			cout << c << endl << a << endl << b << endl << endl;
			cout << a << endl << b << endl << c;

		}
		else
		{
			cout << a << endl << c << endl << b << endl << endl;
			cout << a << endl << b << endl << c;
		}
	}

	else if (c >= b && c >= a)
	{
		if (b >= a)
		{
			cout << a << endl << b << endl << c << endl << endl;
			cout << a << endl << b << endl << c;

		}
		else
		{
			cout << b << endl << a << endl << c << endl << endl;
			cout << a << endl << b << endl << c;
		}
	}
    
    return 0;
}

