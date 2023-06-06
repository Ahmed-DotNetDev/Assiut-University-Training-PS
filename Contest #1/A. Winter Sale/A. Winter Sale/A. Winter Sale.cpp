#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double X, PA, PB;
    cin >> X >> PA;
    PB = PA / (1 - X / 100);

    cout << fixed << setprecision(2) << PB << endl;
    return 0;
}

