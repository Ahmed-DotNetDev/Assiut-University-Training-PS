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
    for (int number_line = 1; number_line <= counter; number_line++) {//4
                              //3          
        for (int space_line =1; space_line <= counter -number_line; space_line++) {
            cout << " ";
        }
        for (int printing = 1; printing <= (number_line *2)-1; printing++) {
            cout << "*";
        }
        cout << endl;
        
    }

    return 0;
}

