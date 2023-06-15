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
    int n,numbers,max=0;
    cin >> n;
    while (n--) {//4
        cin >> numbers; //2 2 3 2
        if (max<numbers) {
            max = numbers;
        }
    }
    cout << max;//3 
    return 0;
}

