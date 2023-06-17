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
    int N, A, B,Sum=0; cin >> N >> A >> B;  //20  2  5 
    for (int i = 1; i < N; i++) {
        if (i >= 2 && i <= 5) {
            Sum += i;
        }
        else if(i>5) {
            while(i)
        }
    }
    return 0;
}

