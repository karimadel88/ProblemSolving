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
    ll n;
    cin>>n;
    ll a[n];
    
    deque<ll>q;
    for(int i=0;i<n;i++)cin>>a[i];
    // cout<<"a";
    for(int i=0;i<n;i++){
        if(i%2 == 0)q.push_front(a[i]);
        else q.push_back(a[i]);
    }
    
    if(n%2 == 0)
        reverse(q.begin(),q.end());
    // cout<<"A";
    for(int i=0;i<n;i++)cout<<q.at(i)<<" ";

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}