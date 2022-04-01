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
    int cnt = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>=1&&x<=7){
            cnt++;
        }
        if(cnt == 7){
            ans = i+1;
            cnt++;
        }
    }
    cout<<ans<<endl;

}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}