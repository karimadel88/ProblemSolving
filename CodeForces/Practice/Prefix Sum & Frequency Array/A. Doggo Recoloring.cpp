// https://codeforces.com/contest/1025/problem/A
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

int freq [28];
int main(){
    fast;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif
	int n;
	cin>>n;
	string s;
	cin>>s;
	if(n==1){
		cout<<"Yes";
		return 0;
	}
	for(int i=0;i<n;i++){
		freq[s[i]-'a']++;
	}
	for(int i=0;i<28;i++){
		if(freq[i]>1){
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
	
    return 0;
}
