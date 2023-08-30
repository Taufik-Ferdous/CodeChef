#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int arr1[3];
        int arr2[3];
        for(int i=0; i<3; i++) cin>>arr1[i];
        for(int i=0; i<3; i++) cin>>arr2[i];

        sort(arr1, arr1+3);
        sort(arr2, arr2+3);

        if((arr1[1]+arr1[2])>(arr2[1]+arr2[2])) cout<<"Alice" <<endl;
        else if((arr1[1]+arr1[2])<(arr2[1]+arr2[2])) cout<<"Bob" <<endl;
        else cout<<"Tie" <<endl;
    }
}