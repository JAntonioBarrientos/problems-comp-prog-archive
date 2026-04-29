#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h, w;
    cin >> h >> w;
    vector<vector<ll>> dp(h, vector<ll>(w, 0));
    for(int i = 0; i< h; i++){
        string s;
        cin >> s;
        for(int j = 0; j <w; j++){
            if(s[j] == '#'){
                dp[i][j] = -1;
            }
        }
    }
    dp[0][0] = 1;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(dp[i][j] == -1){
                dp[i][j] = 0;
                continue;
            }
            if(i-1>= 0){
                dp[i][j] += dp[i-1][j];
                dp[i][j] %= MOD;
            }
            if(j -1 >= 0){
                dp[i][j] += dp[i][j-1];
                dp[i][j] %= MOD;
            }
        }
    }
    cout << dp[h-1][w-1] << endl;
    return 0;
}

