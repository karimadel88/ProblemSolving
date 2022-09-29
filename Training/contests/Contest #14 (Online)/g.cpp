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
    int n,m;
    cin>>n>>m;
    
    ll cycle = n*(n+1)/2;
    ll mAfterCycles = m % cycle;

    for(int i= 1;i<=n;i++){
        if(mAfterCycles >= i) mAfterCycles -= i;
        else break;
    }
    cout<<mAfterCycles;

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}