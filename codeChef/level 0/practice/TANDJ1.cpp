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
    int a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;
    int res = abs(a-c)+abs(b-d);
    if(res == k )cout<<"YES"<<endl;
    else if(res < k && res%2==k%2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}