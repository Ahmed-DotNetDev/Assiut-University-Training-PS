#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n, k, a; cin >> n >> k >> a;
    double res1 = (n * k) / a;//4324324.23
    ll res2 = res1;//4324324
    double new_res = res1 - res2; //0.23
    if (new_res > 0) {
        cout << "double";
    }
    else if (res2<= 2147483647) {
        cout << "int";
    }
    else {
        cout << "long long";
    }
    return 0;
}

