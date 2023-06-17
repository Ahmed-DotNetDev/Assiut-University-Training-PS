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
    ll counter,no1,no2,sum=0; cin >> counter;
    while (counter--)
    {
        cin >> no1 >> no2; //5 6 
        
        for (int i = min(no1, no2) + (1); i < max(no1, no2); i++) {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        cout << sum << endl;
        no1 = 0, no2 = 0, sum = 0;
    }

    return 0;
}

