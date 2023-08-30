#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string a, b, c;
        int s;
        cin>>s >>a >>b >>c;

        int dif=-1;
        if(a[0]<b[0] || a[0]==b[0]) dif=((b[0]-96)-(a[0]-96));
        else dif=26-((a[0]-96)-(b[0]-96));

        for(int i=0; i<s; i++){
            if((c[i]+dif)>'z') cout<<(c[i]-(96+dif));
            else cout<<(c[i]+dif);
        }
        cout<<endl;
    }
}