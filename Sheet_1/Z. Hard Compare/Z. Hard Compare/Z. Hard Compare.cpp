#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, c, d; cin >> a >> b >> c >> d;
    string String = ((b * log(a)) > (d * log(c))) ? "YES" : "NO";
    cout << String;
    return 0;
}

