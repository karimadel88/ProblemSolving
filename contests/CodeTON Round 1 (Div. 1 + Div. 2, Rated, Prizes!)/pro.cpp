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
    ll b[n];
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        a[i] = x;
        b[i] = x;
    }
    sort(b,b+n);
    ll max = b[n-1];
    ll min = b[0];
    for(int i=0;i<n;i++){
        if(a[i] == min){
            cout<<i+1<<" ";
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i] == max){
            cout<<i+1<<" ";
            break;
        }
    }
    cout<<endl;
}
int main () {
    fast();
    int t;
    cin >> t;
    while(t--)
        solve();

}