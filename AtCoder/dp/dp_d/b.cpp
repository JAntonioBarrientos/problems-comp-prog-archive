#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, w;
    cin >> n >> w;
    vector<ll> peso(n+1);
    vector<ll> valor(n+1);
    for(int i = 1; i <= n; i++){
        cin >> peso[i];
        cin >> valor[i];
    }
    vector<ll> dp(w+1,0);
    for(int i = 1; i <= n; i++){
        for(int j = w; j >= 0; j--){
            if(j-peso[i] >= 0){
                dp[j] = max(valor[i] + dp[j-peso[i]], dp[j]);
            }
        }
    }
    cout << dp[w] << "\n";
    return 0;
}


