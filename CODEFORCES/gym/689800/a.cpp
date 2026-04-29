#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using cd = complex<long double>;
const long double PI = acos(-1.0L);

void fft(vector<cd> & a, bool invert) {
    int n = a.size();
    for (int i = 1, j = 0; i < n; i++) {
        int bit = n >> 1;
        for (; j & bit; bit >>= 1)
            j ^= bit;
        j ^= bit;

        if (i < j)
            swap(a[i], a[j]);
    }
    for (int len = 2; len <= n; len <<= 1) {
        long double ang = 2 * PI / len * (invert ? -1.0L : 1.0L);
        cd wlen(cos(ang), sin(ang));
        for (int i = 0; i < n; i += len) {
            cd w(1);
            for (int j = 0; j < len / 2; j++) {
                cd u = a[i+j], v = a[i+j+len/2] * w;
                a[i+j] = u + v;
                a[i+j+len/2] = u - v;
                w *= wlen;
            }
        }
    }
    if (invert) {
        for (cd & x : a)
            x /= n;
    }
}

vector<ll> multiply(vector<ll> const& a, vector<ll> const &b){
    vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    int n = 1;
    while (n < a.size() +b.size())
        n <<= 1;

    fa.resize(n);
    fb.resize(n);

    fft(fa, false);
    fft(fb, false);

    for(int i = 0; i < n; i++){
        fa[i] *= fb[i];
    }
    fft(fa, true);

    vector<ll> result(n);
    for(int i = 0; i <n; i++){
        result[i] = round(fa[i].real());
    }
    return result;
}


int main(){
    int m,n;
    cin >> m >> n;
    vector<ll> s(2*n-1);
    for(int i = 0; i < m; i++){
        cin >> s[i];
    }
    for(int i = m; i < 2*n-1; i++){
        s[i] = 0;
    }
    vector<ll> r(2*n-1);
    for(int i = n-1; i >= 0; i--){
        cin >> r[i];
    }
    for(int i = n; i < 2*n-1; i++){
        r[i] = r[i-n];
    }
    ll e, f; 
    cin >> e >> f;

    auto res = multiply(s, r);

    int c_e = 0;
    int c_f = 0;
    vector<ll> prod;
    prod.push_back(res[n-1]);
    for(int i = 0; i < (n-m+1)-1; i++){
        prod.push_back(res[2*(n-1) - i]);
    }
    for(auto p: prod){
        if(p <= e){
            c_e++;
        }
        else if( p>= f){
            c_f++;
        }
    }
    cout << c_f << " " << c_e << endl;
    return 0;
}
       
