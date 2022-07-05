#include <bits/stdc++.h>
#include<map>
using namespace std;
#define cin(vec) for(auto& i : vec) cin >> i
#define fixed(n) fixed << setprecision(n)
#define all(vec) vec.begin(), vec.end()
#define sz(x) int(x.size())
#define ll long long

void fast(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("./../input.txt", "r", stdin), freopen("./../output.txt", "w", stdout); 
    #endif
}

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    map<char,int>m;
    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        m[ch]++;
    }
    // sort(m.begin(),m.end(),cmp);
    for(auto &x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}