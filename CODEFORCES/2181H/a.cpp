#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void factor(map<ll, ll> &fact, ll num){
    ll n = num;
    for(int i = 2; i*i <= num; i++){
        while(n % i == 0){
            fact[i]++;
            n /= i;
        }
    }
    if(n > 1)
        fact[n]++;
    return;
}

ll distribute(map<ll, ll> &fact_n, map<ll, ll> &other){
    ll div = 1;
    for(auto &[key, val]: fact_n){
        if(other.count(key) > 0 and val > 0){
            if(fact_n[key] <= other[key])
                for(int i = 0; i< fact_n[key]; i++)
                    div *= key;
            else
                for(int i = 0; i< other[key]; i++)
                    div *= key;
            fact_n[key] -= other[key];
        }
    }
    return div;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll w, h, d, n;
    cin >> w >> h >> d;
    cin >> n;
    map<ll, ll> fact_w;
    map<ll, ll> fact_h;
    map<ll, ll> fact_d;
    map<ll, ll> fact_n;

    factor(fact_w, w);
    factor(fact_h, h);
    factor(fact_d, d);
    factor(fact_n, n);

    ll div_w = distribute(fact_n, fact_w);
    ll div_h = distribute(fact_n, fact_h);
    ll div_d = distribute(fact_n, fact_d);

    bool valid = true;
    for(auto &[key, val]: fact_n){
        if(val > 0){
            valid = false;
            break;
        }
    }
    if(valid){
        cout << div_w -1 << " ";
        cout << div_h -1 << " ";
        cout << div_d -1 << " ";
    }
    else{
        cout << -1;
    }
    return 0;
}
