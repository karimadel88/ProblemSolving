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
    cin>>n>>m>>k;
    int sum;
    int ans = 0;
    for(int i=0;i<n;i++){
        sum = 0;
        for(int j=0;j<k;j++){
            int x;
            cin>>x;
            sum+=x;
        }
        int y;
        cin>>y;
        if(sum>=m&&y<=10){
            ans++;
        }
    }
    cout<<ans<<endl;

}
int main () {
    fast();
    int t;
    t=1;
    while(t--)
       solve();

}