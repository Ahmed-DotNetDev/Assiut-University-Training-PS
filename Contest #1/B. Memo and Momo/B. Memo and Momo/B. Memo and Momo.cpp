#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long  long a, b, k;
    cin >> a >> b >> k;
    if (a % k == 0 && b % k == 0)
    {
        cout << "Both";
    }
    else if (a % k == 0 && b % k != 0)
    {
        cout << "Memo";
    }
    else if (b % k == 0 && a % k != 0)
    {
        cout << "Momo";
    }
    else {
        cout << "No One";
    }
    return 0;
}

