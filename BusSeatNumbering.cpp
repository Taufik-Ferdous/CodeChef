#include<bits/stdc++.h>
using namespace std;

void lulu(int a){
    if(a<16){
        if(a>=11) cout<<"Lower Single" <<endl;
        else cout<<"Lower Double" <<endl;
    }
    else{
        if(a>=26) cout<<"Upper Single" <<endl;
        else cout<<"Upper Double" <<endl;
    }
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        lulu(a);
    }
}