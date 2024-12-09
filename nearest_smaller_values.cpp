#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;
    stack <int> st;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < n; i++){
        while(!st.empty() && v[st.top()] >= v[i]){
            st.pop();
        }
        if(st.empty()){
            cout << 0 << " ";
        }else{
            cout << st.top() + 1 << " ";
        }

        st.push(i);
    }

    return;
}

int main(){
    
    solve();    
    
}