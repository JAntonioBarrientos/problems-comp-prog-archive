#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll ans = 8 + 3*(n-3);
    ans *= 3;
    for(int i = 0; i < n-3 ; i++){
        ans *= 4;
    }
    cout << ans << endl;
    return 0;
}

