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
	int number; cin >> number;
	int checker, digits, res = 0;
	checker = number;
	while (number != 0)
	{
		digits = number % 10;//121
		res = res * 10 + digits; //121 
		number = number / 10;
	}
	if (checker == res)
	{
		cout << res << endl << "YES";
	}
	else
	{
		cout << res << endl << "NO";
	}

	return 0;
}

