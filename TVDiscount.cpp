#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a, b, c, d;
        cin>>a >>b >>c >>d;
        if((a-c)<(b-d)) cout<<"First" <<endl;
        else if((a-c)>(b-d)) cout<<"Second" <<endl;
        else cout<<"Any" <<endl;
    }
}