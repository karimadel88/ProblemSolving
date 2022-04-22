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
    if(n==1){
        cout<<"NO"<<endl;
        return;
    }
    ll sum = 1;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            if(i*i!=n){
                sum+=i+n/i;
            }else{
                sum+=i;
            }
        }

    }
    if(sum == n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }    
}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}