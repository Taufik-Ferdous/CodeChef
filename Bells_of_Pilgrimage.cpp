#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long int total=0, b=0, curr=0, rung=0;
        cin>>total >>b >>rung >>curr;
        if(rung == 0) cout<<curr <<endl;
        else{
            if(rung == total) curr+=20;
            if(rung>0){
                if(rung<b){
                    curr+=(rung*10);
                    rung=0;
                }
                else{
                curr+=(b*10);
                rung-=b;
                }
            }
            if(rung>0) curr+=(rung*5);
            cout<<curr <<endl;
        }

    }
}