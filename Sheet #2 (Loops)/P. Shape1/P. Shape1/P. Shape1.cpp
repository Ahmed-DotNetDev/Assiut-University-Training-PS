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
    int n; cin >> n;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j <i; j++)
        {
            cout << "*";
        }
        cout << endl;

    }
    return 0;
}

