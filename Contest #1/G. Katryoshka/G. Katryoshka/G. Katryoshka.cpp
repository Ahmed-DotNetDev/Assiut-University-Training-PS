#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long eye, mouth, body, result;
    cin >> eye >> mouth >> body;
    //--------------------------------------
    if (eye == 0 || body == 0)
    {
        cout << 0;
    }
    //--------------------------------------
    else if ((mouth >= body && mouth >= eye) || (mouth >= body && mouth < eye) || (mouth < body && mouth >= eye))
    {
        result = min(eye, body);
        cout << result << endl;
    }
    //---------------------------------------
    else if (mouth < body && mouth < eye)
    {
        result = mouth;
        eye -= mouth;
        body -= mouth;
        result += min(eye / 2, body);
        cout << result;
    }
    return 0;
}

