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
    int x,y;
    cin>>x>>y;
    if(x==0&&y==0){
        cout<<0<<endl;
        return;
    }
    ll sq2 = (x*x) + (y*y);
    float res = sqrt(sq2);
    if((int)res == res){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
    }

}
int main () {
    fast();
    int t;
    cin >> t;
    while(t--)
        solve();
}