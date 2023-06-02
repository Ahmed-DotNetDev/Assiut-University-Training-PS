#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char letter; cin >> letter;
    if (isupper(letter)) {
        cout << (char)tolower(letter);
    }
    else {
        cout << (char)toupper(letter);
    }
    return 0;
}

