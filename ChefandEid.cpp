#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int s;
        cin>>s;
        int arr[s];
        for(int i=0; i<s; i++) cin>>arr[i];
        sort(arr, arr+s);

        int dif=-1;
        for(int i=0; i<s-1; i++)
            if(abs(arr[i]-arr[i+1])<dif || dif==-1)
                dif=abs(arr[i]-arr[i+1]);
                
        cout<<dif <<endl;
    }
}