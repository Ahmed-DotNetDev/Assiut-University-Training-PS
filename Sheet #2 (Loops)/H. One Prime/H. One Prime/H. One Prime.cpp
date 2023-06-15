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
	int number, counter = 0; cin >> number;
	// 1 itself -=>prime else not prime
	// 5 /1  %=0        5 /5  %=0 
	for (int i = 2; i <= number; i++) {//2 3 4 5 
		if (number % i == 0) {
			counter++;
		}
	}
	if (counter > 1 || counter == 0) {
		cout << "No";
	}
	else {
		cout << "Yes";
	}
	return 0;
}

