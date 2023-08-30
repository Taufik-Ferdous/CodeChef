#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void lulu(int a){
    if(a%2 == 0 and a%7 == 0) cout<<"Alice";
    else if(a%2 == 1 and a%9 == 0) cout<<"Bob";
    else cout<<"Charlie";
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        lulu(a);
    }
}