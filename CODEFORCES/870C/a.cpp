#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int que;
    cin >> que;
    while(que--){
        int n;
        cin >> n;
        if(n <= 3 or n == 5 or n== 7 or n== 11){
            cout << "-1\n";
            continue;
        }
        int ans;
        if(n % 2 == 0)
            ans = n /4;
        else{
            ans = n/4;
            ans--;
        }
        cout <<ans << "\n";
    }
    return 0;
}
