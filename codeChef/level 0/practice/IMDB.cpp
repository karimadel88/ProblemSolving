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
    ll n,x;
    cin>>n>>x;
    ll max = 0;
    while(n--){
        ll space;
        ll rating;
        cin>>space>>rating;
        if(space<=x){
            if(rating>max)max=rating;
        } 
    }
    cout<<max<<endl;

}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}