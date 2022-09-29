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
    int n,c;
    map<int,int>m;
    cin>>n>>c;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    ll res = 0;
    for(auto &x:m){
        if(x.second == 1){
            res += 1;
        }else{
            
            res += min(x.second, c);
        }
    }
    cout<<res<<endl;
    
}
int main () {
    fast();
    int t;
    t = 1;
    cin>>t;
    while(t--)
       solve();

}