#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double c = 3.141592653, R;
    cin >> R;
    cout << fixed << setprecision(9) << c * (R * R);
    return 0;
}