#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int nums = 0;
        bool flag = false;
        for(int i = 0; i< n; i++){
            cin >>nums;
            if(nums == 67){
                flag = true;
            }
        }
        if(flag){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
 
 
 
    return 0;
}