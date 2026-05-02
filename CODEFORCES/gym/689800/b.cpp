#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;
vector<ll> fact(1e7+1, 0);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll m, t;
    cin >> m >> t;
    vector<ll> nums(m);
    for(auto &x: nums)
        cin >> x;
    fact[0] = 1;
    for(int i = 1; i <= 1e7; i++){
        fact[i] = ( i * fact[i-1] ) % MOD;
    }
    ll total = 0;
    ll sum = 0;
    for(int i = 0; i<m; i++){
        total *= nums[i];
        total %= MOD;
        sum += nums[i];
    }

    ll ways = 0;
    for(int i = 0; i<= min(t,sum) ; i++){
        ll temp = 0;







