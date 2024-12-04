#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n, x;
    cin >> n >> x;

    vector<pair<int, int>> v;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        pair<int, int> p;
        p.first = a;
        p.second = i;
        v.push_back(p);
    }
    //cout << v.size() << endl;
    sort(v.begin(), v.end());
    int j, k;

    for(int i = 0; i < n; i++){
        j = i + 1;
        k = n - 1;
        while(j < k){
            int sum = v[i].first + v[j].first + v[k].first;
            if(sum < x){
                j++;
            }else if(sum > x){
                k--;
            }else{
                cout << v[i].second + 1 << " " << v[j].second + 1 << " " << v[k].second + 1 << endl;
                return;
            }

        }

    }

    cout << "IMPOSSIBLE" << endl;
}

int main(){
    
    solve();    
    
}