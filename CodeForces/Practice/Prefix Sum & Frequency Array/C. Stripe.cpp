//http://codeforces.com/contest/18/problem/C
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}

void solve(){
}

int c[100004];
int main(){
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    #endif
    int n,cnt=0;
    cin>>n;
    int a[n+2];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        c[i] = a[i] + c[i-1];
    }
    for(int i=1;i<n;i++){
        if(c[i] == c[n]-c[i])cnt++;
    }
    cout<<cnt;
    return 0;
}
