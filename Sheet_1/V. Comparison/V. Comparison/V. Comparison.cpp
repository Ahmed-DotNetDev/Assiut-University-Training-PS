#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    char s;
    cin >> a >> s >> b;
    switch (s)
    {
    case '>':
    {
        if (a > b)
        {
            cout << "Right\n";
        }
        else
        {
            cout << "Wrong\n";

        }
        break;
    case '<':
    {
        if (a < b)
        {
            cout << "Right\n";
        }
        else
        {
            cout << "Wrong\n";

        }
        break;
    }
    case '=':
    {
        if (a == b)
        {
            cout << "Right\n";
        }
        else
        {
            cout << "Wrong\n";
        }
        break;
    }
    default:
        cout << "wrong";
    }
    }
    return 0;
}

