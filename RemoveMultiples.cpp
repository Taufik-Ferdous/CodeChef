#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long int main, sub;
        cin>>main >>sub;
        long long int sum = (main*(main+1))/2;
        long long int csum=0;
        for(long long int i=0; i<sub; i++){
            long long int x;
            cin>>x;
            csum+=x;
        }
        cout<<sum-csum <<endl;
    }
}