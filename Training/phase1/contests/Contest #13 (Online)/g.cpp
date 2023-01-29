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
bool isPrime(ll n){
    for(int i = 2 ; i*i <= n ; i++){
        if(n%i==0) return false;
    }
    return true;
}
void solve(){
    ll n;
    cin>>n;
    long long sqr = sqrt(n);
    if(sqr*sqr != n || n==1){
        cout<<"NO\n";
        return;
    }
    if(isPrime(sqr)){
        cout<<"YES\n";
        
    }else
    cout<<"NO\n";
    
}
int main () {
    fast();
    int t;
    t = 1;
    cin>>t;
    while(t--)
       solve();

}