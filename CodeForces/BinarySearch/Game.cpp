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

bool can(ll a[] ,ll k,ll x){
	return (a[k] > x);
}
void solve(){
}
int main () {
    fast();
    ll n,q;
    cin>>n>>q;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    while(q--){
        ll k;
        cin>>k;
        ll ans=-1;
        ll l=0,r=n-1;
        while(l<=r){
            ll mid = (l+r)/2;
            if(can(a,mid,k)){
                ans = mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        (ans > -1) ? cout << a[ans]<<endl : cout<<-1<<endl;
    }

}