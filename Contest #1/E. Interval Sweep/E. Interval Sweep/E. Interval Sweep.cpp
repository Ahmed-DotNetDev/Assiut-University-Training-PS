#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    //1 2 3 4 5     -=>3Odd , 2Even  =1
    //2 3 4 5 6     -=>2Odd , 3Even  =1
    //1 2 3 4 5 6   -=>3Odd , 3Even  =0
    if ((a - b == 1 || b - a == 1 || a - b == 0 || b - a == 0) && (a != 0 && b != 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

