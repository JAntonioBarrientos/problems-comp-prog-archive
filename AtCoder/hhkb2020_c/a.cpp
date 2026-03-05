#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 2e5;

struct Mex{
    multiset<int> current;
    set<int> not_in;
    Mex(): current(), not_in() {
        for(int i = 0; i <= MAX_N; i++){
            not_in.insert(i);
        }
    }
    void add(int x){
       if(!current.count(x)){
           not_in.erase(x);
       }
       current.insert(x);
    }
    int mex(){
        return *not_in.begin();
    }
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    Mex m;
    while(n--){
        int x;
        cin >> x;
        m.add(x);
        cout << m.mex() << "\n";
    }
    return 0;
}

