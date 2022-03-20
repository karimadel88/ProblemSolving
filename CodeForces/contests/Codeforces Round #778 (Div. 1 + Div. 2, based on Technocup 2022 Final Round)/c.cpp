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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<n-1;i++){
        if((a[i]+a[i+1])%2 ==0 && a[i]!=a[i+1]){
            cout<<"NO"<<endl;
            break;
        }else if ((a[i]+a[i+1])%2 !=0 && a[i]==a[i+1]){
            cout<<"NO"<<endl;
            return;

        }else{
            a[i+1] = a[i] + a[i+1];
        }
    }
    cout<<"YES"<<endl;

}
int main () {
    fast();
    int t;
    cin >> t;
    while(t--)
        solve();

}