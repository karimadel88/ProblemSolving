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
    string s,t;
    cin>>s>>t;
    int n = s.size(),m=t.size();
    int res = -1;
    if(s!=t){
        res = max(n,m);
    }
    cout<<res;

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}