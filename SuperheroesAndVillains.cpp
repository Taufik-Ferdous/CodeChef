#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int vil=1, hero=1;
        int cH=0, cV=0;
        while(a--){
            string in;
            cin>>in;
            int s=in.length();
            if(in[s-3]=='m' and in[s-2]=='a' and in[s-1]=='n') hero++;
            else vil++;
            if(vil-hero==3 and cH==0) cV=1;
            if(hero-vil==2 and cV==0) cH=1;
        }
        if(cH==1) cout<<"superheroes" <<endl;
        else if(cV==1) cout<<"villains" <<endl;
        else cout<<"draw" <<endl;
    }
}