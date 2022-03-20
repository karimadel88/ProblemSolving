//https://codeforces.com/contest/709/problem/A
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
    int n,b,d;
    cin>>n>>b>>d;
    ll sum = 0;
    int ans = 0;
    while(n--){
        int x;
        cin>>x;
        if(x>b)continue;
        sum += x;
        if(sum > d){
            ans++;
            sum = 0;
        }
    }
    cout<<ans;

}
int main () {
    fast();
    int t = 1;
    //cin >> t;
    while(t--)
    solve();

}