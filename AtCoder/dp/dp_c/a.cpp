#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<vector<ll>> values;
    ll a,b,c;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        values.push_back({a,b,c});
    }
    vector<vector<ll>> dp(n+1, vector<ll>(3, 0));
    for(int i = 1; i <= n; i++){
        dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + values[i-1][0];
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + values[i-1][1];
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + values[i-1][2];
    }
    ll ans = max(dp[n][0], max(dp[n][1], dp[n][2]));
    cout << ans << "\n";
    return 0;
}

