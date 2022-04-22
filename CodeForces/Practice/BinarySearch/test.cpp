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
    ll a,b;
    cin>>a>>b;
    ll c = a;
    for(int i=1;i<b;i++){
        c *=a;
        c = c%10;
        if(c==0)break;
    }
    cout<<c%10<<endl;
}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
        solve();

}