#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<bool> is_prime(n+2, true);
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i*i <= n+1;i++){
        if(is_prime[i]){
            for(int j = i*2; j <= n+1; j+=i){
                is_prime[j] = false;
            }
        }
    }
    int min = 2;
    if(n <= 2)
        min = 1;
    cout << min << "\n";
    for(int i =2; i <= n+1; i++){
        if(is_prime[i]){
            cout << "1 ";
        }
        else{
            cout << "2 ";
        }
    }
    return 0;
}



