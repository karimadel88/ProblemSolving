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
    int n,p,x,y;
    cin>>n>>p>>x>>y;
    int a[n];
    for(auto &x:a)cin>>x;
    int ans = 0;
    for(int i=0;i<p;i++){
        if(a[i]==0)ans+=x;
        else ans+=y;
    }
    cout<<ans<<endl;
}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}