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
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll res = (a[1]-a[0]) + (a[2]-a[1]);
    for(int i=1;i<n-2;i++){
        ll temp = (a[i+1]-a[i]) + (a[i+2]-a[i+1]);
        res = min(res,temp);
    }
    //ll temp = (a[1]-a[0]) + (a[2]-a[1]);
    cout<<res;

}
int main () {
    fast();
    int t;
    t = 1;
    cin>>t;
    while(t--){
       solve();
       cout<<endl;
    }

}