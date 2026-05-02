#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i * i <= n; i++){
        if(is_prime[i]){
            for(int j = i*2; j <= n; j+=i){
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for(int i = 2; i <=n; i++){
        if(is_prime[i])
            primes.push_back(i);
    }
    int con = 0;
    for(int i = 2; i <primes.size(); i++){
        for(int j = 1; j < i; j++){ 
            if(primes[j-1] + primes[j] +1 == primes[i]){
                con++;
                break;
            }
        }

    }
    if(k <= con)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

