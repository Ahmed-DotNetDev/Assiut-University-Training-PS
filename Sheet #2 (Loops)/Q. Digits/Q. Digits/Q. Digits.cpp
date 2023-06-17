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
    int counter; cin >> counter;
    for (int i = 0; i < counter; i++) {
        ll numbers; cin >> numbers;
        if (numbers==0)
        {
            cout << 0;
            continue;
        }
        while (numbers!=0)
        {
            ll rev = numbers % 10;
            cout << rev << " ";
            numbers /= 10;
        }
        cout << endl;
    }
    return 0;
}

