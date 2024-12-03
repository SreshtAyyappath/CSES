#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    ll n;
    cin >> n;
    vector<pair<int, int>> v;

    for(int i = 0; i < n; i++){
        int a, d;
        cin >> a >> d;
        pair <int, int> p;
        p.first = a;
        p.second = d;
        v.push_back(p);

    }

    sort(v.begin(), v.end());
    ll ans = 0;
    ll curr = 0;
    for(int i = 0; i < v.size(); i++){
        curr += v[i].first;
        ans += (v[i].second - curr);
    }


    cout << ans << endl;


    
}