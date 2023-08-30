#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a, b;
        cin>>a >>b;
        if(a>(b*10)) cout<<"YES" <<endl;
        else cout<<"NO" <<endl;
    }
}