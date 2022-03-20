//https://codeforces.com/contest/294/problem/A

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
    int a[n];
    cin(a);
    int m;
    cin>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        x--;
        if(x!=0){
            a[x-1]+=y-1;
        }
        if(x!=n-1){
            a[x+1] += a[x]-y;
        }
        a[x]=0;
    }
    for(int i=0;i<n;i++)cout<<a[i]<<endl;

}
int main () {
    fast();
    int t = 1;
    //cin >> t;
    while(t--)
    solve();

}