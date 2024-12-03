#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    ll n;
    cin >> n;

    vector<ll> v(n);
    ll mx = 0;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mx = max(mx, v[i]);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n - 1; i++){
        sum += v[i];
    }
    //cout << mx << " " << sum << endl;
    if(mx > sum){
        cout << mx * 2 << endl;
    }else{
        cout << sum + mx << endl;
    }

    
    
}