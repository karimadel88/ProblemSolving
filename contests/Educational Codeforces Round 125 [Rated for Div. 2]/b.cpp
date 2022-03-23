#include <bits/stdc++.h>
using namespace std;
#define cin(vec) for(auto& i : vec) cin >> i
#define fixed(n) fixed << setprecision(n)
#define all(vec) vec.begin(), vec.end()
#define sz(x) int(x.size())
#define ll long long

void fast(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}
void solve(){
    vector<int>v;
    ll n,b,x,y;
    cin>>n>>b>>x>>y;
    v.push_back(0);
    for(int i=1;i<=n;i++){
        if(v[i-1]+x>b &&v[i-1]-y<=b){
            v.push_back(v[i-1]-y);
            continue;
        }else if(v[i-1]+x<=b &&v[i-1]-y>b){
            v.push_back(v[i-1]+x);
            continue;
        }else if(v[i-1]+x>b &&v[i-1]-y>b){
            v.push_back(0);
        }
        ll X= max(v[i-1]+x,v[i-1]-y);
        v.push_back(X);
    }
    ll sum = 0;
    for(int i=1;i<=n;i++){
        if(v[i]<=b)
            sum+=v[i];
    }
    cout<<sum<<endl;
    // cout<<v[0];
}
int main () {
    fast();
    int t;
    cin >> t;
    while(t--)
        solve();
}