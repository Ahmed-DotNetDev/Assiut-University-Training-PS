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
    int number_of_lines;
    cin>>number_of_lines;//7
    for (int lines = 1; lines <= number_of_lines; lines++)
    {
        for (int space = 1; space <= number_of_lines - lines; space++)
        {
            cout<<" ";
        }
        for (int stars = 1; stars <= lines * 2 - 1; stars++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //-------------------------------->>>rotatoin of shapes
    for (int i = number_of_lines; i > 0; i--)
    {
        for (int j = number_of_lines; j > i; j--)
        {
            cout<<" ";
        }
        for (int k = 0; k <= (i * 2) - 2; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
