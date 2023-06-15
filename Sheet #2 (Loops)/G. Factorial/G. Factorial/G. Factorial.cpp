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
    ll counter, input, factorial = 1; cin >> counter;
    while (counter--) {
        
        cin >> input; //5
                              //5
        for (int i = 1; i <= input; i++) {
            factorial *= i;//5  
        }
        cout << factorial << endl;
        input = 0;
        factorial = 1;
    }
    
    return 0;
}

