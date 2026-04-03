#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n, 0);
        for(auto &x: nums)
            cin >> x;
        int id_max = 0;
        for(int i = 0; i< n; i++){
            if(nums[id_max] < nums[i]){
                id_max = i;
            }
        }
        bool diff_of_max = false;
        for(int i = 0; i <n; i++){
            if(nums[i] != nums[id_max]){
                diff_of_max = true;
                break;
            }
        }
        if(diff_of_max){
            cout << "Yes" << "\n";
            for(int i = 0; i < n; i++){
                if(nums[i] == nums[id_max])
                    cout << "1 ";
                else
                    cout << "2 ";
            }
            cout << "\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}

