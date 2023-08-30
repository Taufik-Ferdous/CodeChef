#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
    ll n, power, bar;
    cin>>n >>power >>bar;

    ll ans=bar;

    vector<ll> w(1e5+10);

    for(ll i=0; i<n; ++i){
        ll a; cin>>a;
        w[a]++;
    }

    for(ll i=0; i<1e5+10; ++i) if(w[i]>=2) ans+=i*(w[i]-(w[i]%2));

    if(ans>=power) cout<<"YES" <<endl;
    else cout<<"NO" <<endl;
}

int main(){
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
}