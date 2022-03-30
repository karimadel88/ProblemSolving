//https://codeforces.com/problemset/problem/313/B
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
const ll mod = 1e9+7, N = 2e6+7, M = 1e5+7, INF = INT_MAX/10;
ll powe(ll x, ll y){ x = x%mod, y=y%(mod-1);ll ans = 1;while(y>0){if (y&1){ans = (1ll * x * ans)%mod;}y>>=1;x = (1ll * x * x)%mod;}return ans;}

ll c[M];
int main(){
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
    string s;cin>>s;
    int n = s.length();
    for(int i=0;i<n-1;i++){
        if(i==0 && s[i]==s[i+1]){
            c[i+1] = 1;
            continue;
        }
        c[i+1]=c[i];
        if(s[i]==s[i+1]){
            c[i+1]+=1;
        }

    }
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        cout<<c[r]-c[l]<<endl;
    }



    return 0;
}
