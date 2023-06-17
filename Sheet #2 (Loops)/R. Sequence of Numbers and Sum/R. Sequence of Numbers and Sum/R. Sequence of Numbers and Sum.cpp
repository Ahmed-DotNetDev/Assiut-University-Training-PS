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
   

	ll no1, no2, sum = 0;
	cin >> no1 >> no2;

	while (no1 > 0 && no2 > 0)
	{
		cin >> no1 >> no2;
		if (no2 <= 0 || no1 <= 0)
		{
			break;
		}
		else
		{
			int mini = min(no1, no2),maxi=max(no1,no2);

			for (int i = mini; i <= maxi; i++)
			{
				cout << i << " ";
				sum += i;
			}
		}
		cout << "sum =" << sum << endl;
		sum = 0;

	}




   
    return 0;
}

