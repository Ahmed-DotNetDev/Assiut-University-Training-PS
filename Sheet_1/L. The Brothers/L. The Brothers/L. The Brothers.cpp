#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string FirstName1, SecondName1, FirstName2, SecondtName2; cin >> FirstName1 >> SecondName1>>FirstName2>>SecondtName2;
    cout << (SecondName1 == SecondtName2 ? "ARE Brothers" : "NOT");
    return 0;
}

