#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int w, h, d, n;
    cin >> w >> h >> d >> n;
    int div_w = gcd(w, n);
    n /= gcd(w,n);
    int div_h = gcd(h, n);
    n /= gcd(h, n);
    int div_d = gcd(d, n);
    n /= gcd(d, n);
    if( n == 1){
        cout << div_w -1 << " ";
        cout << div_h -1 << " ";
        cout << div_d -1 << " "; 
    }
    else{
        cout << -1;
    }
    return 0;
}




