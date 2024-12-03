#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> v;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back({{a, b}, i});
    }

    sort(v.begin(), v.end());

    set <int> st;
    priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int cnt = 0;
    vector<int> ans(n);
    for(auto it : v){
        int arr = it.first.first;
        int dep = it.first.second;
        while(!pq.empty() && pq.top().first < arr){
            st.insert(pq.top().second);
            pq.pop();
        }

        if(!st.empty()){
            auto x = st.begin();
            pq.push({dep, *x});
            ans[it.second] = *x;
            st.erase(x);
        }else{
            cnt++;
            pq.push({dep, cnt});
            ans[it.second] = cnt;
        }

    }

    cout << cnt << endl;

    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
    
}