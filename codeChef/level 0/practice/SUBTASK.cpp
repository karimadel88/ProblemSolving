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
    int n,m,k;
    int ans = 0;
    cin>>n>>m>>k;
    int a[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i] = x;
        if(x)ans++;
    }
    if(ans!=n && ans !=0){
        for(int i=0;i<m;i++){
            int x = a[i];
            if(x==0){
                cout<<0<<endl;
                return;
            }
        }
        cout<<k<<endl;
        return;
    }
    if(ans==n){
        cout<<100<<endl;
        return;
    }
    cout<<0<<endl;

    // if(ans >= m && ans<n)cout<<k<<endl;
    // else if(ans == n)cout<<100<<endl;
    // else cout<<0<<endl;
}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}