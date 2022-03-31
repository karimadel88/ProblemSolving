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
    int l,r,a;
    cin>>l>>r>>a;
    int temp = r%a;
    ll res = r/a + temp;
    r -= temp+1;
    if(r>=l){
        int temp2 = r%a;
        ll res2 = r/a + temp2;
        res=max(res,res2);
    }
    cout<<res<<endl;
    
}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}