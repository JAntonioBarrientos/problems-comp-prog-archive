#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b;
    cin >> a >> b;
    ll ans = a*b/ gcd(a,b) ;
    cout << ans << endl;
    return 0;
}

