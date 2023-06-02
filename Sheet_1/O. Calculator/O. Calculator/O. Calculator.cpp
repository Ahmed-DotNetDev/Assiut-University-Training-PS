#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll FirstNumber, SecondNumber;
    char Operator;
    cin >> FirstNumber >> Operator >> SecondNumber;
    switch (Operator)
    {
    case '+':
        cout << FirstNumber + SecondNumber;
        break;
    case '-':
        cout << FirstNumber - SecondNumber;
        break;
        case '*':
        cout << FirstNumber * SecondNumber;
        break;
    case '/':
        cout << FirstNumber / SecondNumber;
        break;
    default:
        break;
    }
    return 0;
}

