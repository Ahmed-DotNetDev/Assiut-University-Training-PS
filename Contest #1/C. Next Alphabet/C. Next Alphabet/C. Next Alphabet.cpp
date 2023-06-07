#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char ch;
    cin >> ch;
    if (ch >= 'a' || ch <= 'z')
    {
        if (ch == 'z')
        {
            cout << "a";
        }
        else
        {
            cout << ++ch;
        }
    }
    return 0;
}

