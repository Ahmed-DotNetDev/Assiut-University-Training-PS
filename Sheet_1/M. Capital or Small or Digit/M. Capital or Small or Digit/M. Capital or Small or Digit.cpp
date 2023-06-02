#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char letter; cin >> letter;
    if (isdigit(letter)) {
        cout << "IS DIGIT";
    }
    if (letter >= 'A' && letter <= 'Z' || letter >= 'a' && letter <= 'z') {
        if (isupper(letter)) {
            cout << "ALPHA" << endl << "IS CAPITAL";
        }
        else {
            cout << "ALPHA" << endl << "IS SMALL";
        }
    }
    return 0;
}

