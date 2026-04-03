#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll den = 2*2*2*3*3*5*7;
    ll ans = n / den;
    cout << ans << endl;
    return 0;
}


