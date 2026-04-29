#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, w;
    cin >> n >> w;
    vector<ll> pesos(n+1);
    vector<ll> valor(n+1);
    for(int i = 1; i <= n; i++){
        cin >> pesos[i];
        cin >> valor[i];
    }
    vector<vector<ll>> dp(n+1, vector<ll>(w+1, 0));
    for(int i = 1; i <= n; i++){ 
        for(int j = 1; j <= w; j++){
            if(j-pesos[i] >= 0){
                dp[i][j] = max(dp[i][j], valor[i] + dp[i-1][j-pesos[i]]);
            }
            dp[i][j] = max( dp[i][j], dp[i-1][j]);
        }
    }
    cout << dp[n][w] << endl;
    return 0;
}

