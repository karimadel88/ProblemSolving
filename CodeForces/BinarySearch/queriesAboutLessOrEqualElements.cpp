//https://codeforces.com/group/T3p02rhrmb/contest/343396/problem/C
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
    return a[mid]<=key;
}
int main () {
    fast();
    int n,m;
    cin>>n>>m;
    ll a[n];
    cin(a);
    sort(a,a+n);
    while(m--){
        int x;cin>>x;
        int l=0,r=n-1;
        int ans = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(can(a,mid,x)){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid-1;
            }
        }
        cout<<ans+1<<" ";
    }

}