#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int s;
        cin>>s;
        string line;
        cin>>line;

        int a=0, b=0;
        int count=0;

        for(int i=0; i<s; i++){
            if(line[i]==':' && a==0) a=1;
            else if(line[i]==')' && a==1) b++;
            else if(line[i]==':' && a==1 && b>0){
                count++;
                a=1;
                b=0;
            }
            else if(line[i]==':' && a==1 && b==0) a=1;
            else if(line[i]=='('){
                a=0;
                b=0;
            }
        }
        cout<<count <<endl;
    }
}