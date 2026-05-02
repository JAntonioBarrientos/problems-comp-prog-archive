#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, t;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(b % a == 0){
            cout << b * (b/a) << "\n";
            }
        else{
            cout << (a*b) / gcd(a,b) << "\n";
        }
    }
    return 0;
}

