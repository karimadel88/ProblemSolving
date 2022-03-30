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
   ll n,k;
   cin>>n>>k;
   ll a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   sort(a,a+n);
   if(k>=n){
       cout<<a[n-1]<<endl;
        return;
   }
   if(n>k){
       cout<<a[k]<<endl;
       return;
   }

}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();
}