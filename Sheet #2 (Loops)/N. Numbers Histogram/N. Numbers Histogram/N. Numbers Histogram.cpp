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
    char operation; cin >> operation;
    int allnumber, eachnumber; cin >> allnumber;
    while (allnumber--)
    {
        cin >> eachnumber;
        for (int i = 0; i < eachnumber; i++) {
            cout << operation;
        }
        cout << endl;
        eachnumber = 0;
    }
    return 0;
}

