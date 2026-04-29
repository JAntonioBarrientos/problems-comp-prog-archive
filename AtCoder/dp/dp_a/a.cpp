#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> dp(n+1, 1e9);
    vector<ll> h(n+1);
    for(int i = 1; i <=n; i++)
        cin >> h[i];
    dp[1] = 0;
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= 2; j++){
            if(i-j >= 1){
                dp[i] = min(dp[i-j] + abs(h[i] -h[i-j]), dp[i]);
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}

