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
    int a[m];
    for(int i=0;i<m;i++)cin>>a[i];
    sort(a,a+m);
    int minm = INT_MAX;
    for(int i=n-1;i<m;i++){
        minm = min(minm,a[i]-a[i-(n-1)]);
    }
    cout<<minm;

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}