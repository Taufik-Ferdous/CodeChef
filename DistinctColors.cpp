#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a, max=0;
        cin>>a;
        for(int i=0; i<a; i++){
            int x;
            cin>>x;
            if(x>max) max = x;
        }
        cout<<max <<endl;
    }
}