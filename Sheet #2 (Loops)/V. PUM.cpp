#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
typedef string str;

void FIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    FIO();
    int number=1,counter;cin>>counter;
    for(int i=1;i<=counter;i++){
        cout<<number<<" "<<number+1<<" "<<number+2<<" PUM"<<endl;
        number+=4;
    }
    return 0;
}
