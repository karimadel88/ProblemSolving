//https://codeforces.com/problemset/problem/141/A
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
    string f1,f2,f3;
    cin>>f1>>f2>>f3;
    int freq [28] ={};
    int freq2 [28]={};
    if(f1.length()+f2.length() != f3.length()){
		cout<<"NO";
		return 0;
	}
	int n1 = f1.length();
	int n2 = f2.length();
	int n3 = f3.length();
	for(int i = 0;i<n1;i++)freq[f1[i]-'A']++;
	for(int i = 0;i<n2;i++)freq[f2[i]-'A']++;
	for(int i = 0; i<n3;i++)freq2[f3[i]-'A']++;
	
	for(int i=0;i<28;i++){
		if(freq[i]!=freq2[i]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";

    return 0;
}
