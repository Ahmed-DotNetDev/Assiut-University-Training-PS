#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long Num1, Num2, Num3, Num4;
    cin >> Num1 >> Num2 >> Num3 >> Num4;
    cout << "Difference = " << (Num1 * Num2) - (Num3 * Num4);

    return 0;
}

