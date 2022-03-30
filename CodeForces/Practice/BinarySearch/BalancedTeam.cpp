//https://codeforces.com/group/T3p02rhrmb/contest/343396/problem/E
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

}
bool can(ll a[],ll mid,ll key){
    return a[key]+5 >= a[mid];
}
int main () {
    fast();

	int n;
	cin>>n;
    ll a[n];
    cin(a);
    sort(a,a+n);
    ll max1 = 0;
    for(int i=0;i<n;i++){
        int l=0,r=n-1;
        ll ans = 0;
        while (l<=r)
        {
            ll mid = (l+r)/2;
            if(can(a,mid,i)){
                ans = mid;
                l = mid+1;
            }else{
                r = mid -1;
            }
        }
        // cout<<ans<<endl;
    
        ans = (ans - i) + 1;
        max1 = max(max1,ans);
    }
    cout<<max1;

}