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
    int l,r;
    cin>>l>>r;
    int n = (r-l) + 1;
    ll res = (2*r - 2*l) + 1;
    // if(l==r){
    //     cout<<1<<endl;
    //     return;
    // }
    // else{
    //     int temp = l;
    //     res = (r*(r+1)/2) - (temp*(temp+1)/2);
    // }
    cout<<res<<endl;
}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}