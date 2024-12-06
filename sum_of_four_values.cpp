#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n, x;
    cin >> n >> x;

    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        pair<int, int> p;
        int a;
        cin >> a;
        p.first = a;
        p.second = i;
        v[i] = p;
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int p = j + 1;
            int q = n - 1;
            while(p < q){
                int sum = v[i].first + v[j].first + v[p].first + v[q].first;
                if(sum > x){
                    q--;
                }else if(sum < x){
                    p++;
                }else{
                    cout << v[i].second + 1 << " " << v[j].second + 1 << " " << v[p].second + 1<< " " << v[q].second + 1;
                    return;
                }
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
}

int main(){
    
    solve();    
    
}