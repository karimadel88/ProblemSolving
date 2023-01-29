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
    ll sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        // sum+=a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        sum = sum + (a[i] * (i+2));
    }
    sum += (a[n-1]*n);
    cout<<sum;

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}