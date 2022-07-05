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
    cin >> n >> m;
    int a[n];
    for(int i=0;i<n;i++)cin >> a[i];
    sort(a,a+n);
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]!=1){
            cout<<a[i]-1;
            return;
        }
    }

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}