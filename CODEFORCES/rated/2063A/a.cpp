#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int l, r;
    int ans = 0;
    while(t--){
        ans = 0;
        cin >> l >> r;
        if(l == 1 and r == 1)
            ans = 1;
        else if(l == 1){
            ans++;
            ans += r -l-1;
        }
        else{
            ans += r -l;
        }
        cout << ans << "\n";
    }
    return 0;
}


