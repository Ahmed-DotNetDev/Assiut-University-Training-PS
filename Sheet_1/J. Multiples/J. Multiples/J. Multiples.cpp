#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll Num1, Num2; cin >> Num1 >> Num2;
    if (Num1 % Num2 == 0 || Num2 % Num1 == 0) {
        cout << "Multiples";
    }
    else{
        cout << "No Multiples";
    }
    return 0;
}

