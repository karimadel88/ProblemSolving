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
    int n,k;
    cin>>n>>k;
    int temp = k;
    if(n==1){
        cout<<k*2;
        return;
    }
    for(int i=0;i<n;i++){
        if(i<2){
            cout<<k<<" ";
        }else{
            cout<<0<<" ";
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