#include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll binpow(ll a, ll p, ll mod){
    if(p == 0)
        return 1;
    if(p & 1)
        return (a *binpow(a, p-1, mod) ) % mod;
    ll res = binpow(a, p/2, mod);
    return (res * res) % mod;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, c;
    while(cin >> a >> b>> c){
        cout << binpow(a%c,b,c) << "\n";
    }
    return 0;
}

