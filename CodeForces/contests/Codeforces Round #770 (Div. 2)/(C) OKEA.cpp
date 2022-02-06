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

int main(){
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a=1,b=2;
        if(((n*k+1)/2)%k || ((n*k)/2)%k){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=k;j++){
                    if(i%2==0){
                        cout<<b<<" ";
                        b+=2;
                    }else{
                        cout<<a<<" ";
                        a+=2;
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
