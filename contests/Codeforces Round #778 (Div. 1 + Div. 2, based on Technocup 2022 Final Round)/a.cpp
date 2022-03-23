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
    ll a[n];
    // ll b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        // b[i] = a[i];
    }
    sort(a,a+n);
    cout<<a[n-2]+a[n-1]<<endl;

}
int main () {
    fast();
    int t;
    cin >> t;
    while(t--)
        solve();

}