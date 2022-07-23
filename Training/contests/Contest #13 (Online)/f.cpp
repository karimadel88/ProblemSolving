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
    ll n;
    cin>>n;
    ll sumA = 0;
    ll sumB = 0;
    int a[n];
    // negtive 
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        // cin>>a[i];
        sumA+=a[i];
        sumB+=a[n-i-1];
        if(sumA<=0){
            cout<<"NO\n";
            return;
        }
        if(sumB<=0){
            cout<<"NO\n";
            return;
        }
    }
    
    cout<<"YES\n";


}
int main () {
    fast();
    int t;
    t = 1;
    cin>>t;
    while(t--)
       solve();

}