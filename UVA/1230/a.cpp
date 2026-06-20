#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll binpow(ll x, ll y, ll mod){
    if(y == 0)
        return 1;
    if(y & 1)
        return (x * binpow(x, y-1, mod)) % mod;
    ll res = binpow(x, y/2, mod);
    return (res * res ) % mod;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int c; 
    cin >> c;
    ll x, y, n;
    while(c--){
        cin >> x >> y >> n;
        cout << binpow(x, y, n);
        cout << "\n";
    }
    return 0;
}



