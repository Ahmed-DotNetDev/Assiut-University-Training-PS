#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    char s1, s2;
    cin >> a >> s1 >> b >> s2 >> c;
    switch (s1)
    {
    case'+':
        if ((a + b) == c)
        {
            cout << "Yes";
        }
        else
            cout << a + b;
        break;
    case '-':
        if ((a - b) == c)
        {
            cout << "Yes";
        }
        else
            cout << a - b;
        break;
    case'*':
        if ((a * b) == c)
        {
            cout << "Yes";
        }
        else
            cout << a * b;
        break;
    }
    return 0;
}

