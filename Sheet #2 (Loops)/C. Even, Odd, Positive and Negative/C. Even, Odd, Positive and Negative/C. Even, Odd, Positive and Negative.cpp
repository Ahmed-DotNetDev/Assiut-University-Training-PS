#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, number, pos=0, neg=0, odd=0, even=0; cin >> n; //5 

	while (n--) {//5
		//-5 0 -3 -4 12
		cin >> number;
		if (number % 2 == 0) {
			even++;
		}
		else
		{
			odd++;
		}
		if (number > 0 && number!=0) {
			pos++;
		}
		else {
			if (number != 0) {
				neg++;
			}
		}
		number = 0;
	}
	cout << "Even: " << even << endl;
	cout << "Odd: " << odd << endl;
	cout << "Positive: " << pos << endl;
	cout << "Negative: " << neg;
	return 0;
}

