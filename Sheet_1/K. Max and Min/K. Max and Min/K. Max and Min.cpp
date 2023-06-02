#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll Num1, Num2,Num3; cin >> Num1 >> Num2>>Num3;
    cout << min(Num1, min(Num2, Num3)) <<" " << max(Num1, max(Num2, Num3));
    return 0;
}

