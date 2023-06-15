#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Speeding() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    Speeding();
    ll password;
    while (cin >> password) {
        if (password == 1999) {
            cout << "Correct"<<endl;
            break;
        }
        else {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}

