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
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1){
                cout<<1<<" ";
            }else if(j==i){
                cout<<1;
            }else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    
 }
int main () {
    fast();
    int t;
    t = 1;
    cin>>t;
    while(t--)
       solve();

}