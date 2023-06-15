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
	int x; cin >> x;
	             //2    //2
	for (int i = x; i <= x; i++)
	{
		for (int j = 1; j <= 12; j++)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
    return 0;
}

