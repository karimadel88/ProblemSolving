// https://codeforces.com/problemset/problem/433/B
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

int main(){
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int arr [n];
    ll arr1[n+2]={},arr2[n+2]={};
    for(int i=1;i<=n;i++)cin>>arr[i];
    for(int i=1;i<=n;i++){
        arr1[i]=arr1[i-1]+arr[i];
    }
    sort(arr+1,arr+n+1);
    for(int i=1;i<=n;i++){
        arr2[i]=arr2[i-1]+arr[i];
    }
    int t;
    cin>>t;
    while(t--){
        int x,l,r;
        cin>>x;
        if(x==1){
            cin>>l>>r;
            cout<<arr1[r]-arr1[l-1]<<endl;
        }else{
            cin>>l>>r;
            cout<<arr2[r]-arr2[l-1]<<endl;
        }
    }




    return 0;
}
