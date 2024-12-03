#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    ll n, t;
    cin >> n >> t;

    vector<ll> v(n);
    ll mn = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mn = min(v[i], mn);
    }

    ll low = 1;
    ll high = mn * t;
    
    ll ans = -1;
    while(low <= high){
        ll mid = (low + high) / 2;
        bool f = 0;
        ll sum = 0;
        for(int i = 0; i < v.size(); i++){
            sum += mid / v[i];
            if(sum >= t){
                ans = mid;
                f = 1;
            }
        }
        //cout << low << " " << high << " " << ans << " " << f << endl;
        if(f){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }





    

    cout << ans << endl;

    
}