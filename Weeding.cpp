#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long int days, weed, next, spray;
        cin>>weed >>days >>spray;
        long long int arr[weed];
        for(int i=0; i<weed; i++){
            cin>>arr[i];            
        }
        if((arr[weed-1]+spray) <= days+1) cout<<"Yes" <<endl;
        else cout<<"No" <<endl;
    }
}