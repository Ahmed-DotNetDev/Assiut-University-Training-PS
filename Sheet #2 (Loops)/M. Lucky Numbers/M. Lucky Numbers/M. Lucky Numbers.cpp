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

	int a, b, counter=-1; cin >> a >> b;
	for (int i = a; i <= b; i++) {
		int lucky = 0, x = i;
		while (x!=0)
		{
			if (x % 10 != 4 && x % 10 != 7)
			{
				lucky++;
				x=x/ 10;
			}
			x = 0;
		}
		if (lucky == 0) {
			cout << i <<" ";
			counter++;
		}
	}
	if (counter ==-1) {
		cout << -1;
	}
	return 0;
}

