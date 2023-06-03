#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll Number,Result; cin >> Number;
    Result = Number / 1000;
    if (Result % 2 == 0) {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
    return 0;
}

