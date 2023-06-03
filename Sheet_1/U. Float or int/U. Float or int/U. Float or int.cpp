#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	double  number; cin >> number;
	int y = (int)number;
	if ((number - y) > 0)
	{
		cout << "float " << y << " " << number - y;
	}
	else
	{
		cout << "int " << number;
	}
    return 0;
}

