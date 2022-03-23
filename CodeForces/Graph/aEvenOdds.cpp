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
    ll n,k;
    cin>>n>>k;
    if(n%2==0){
        if(k <= (n/2)){
            cout<<(k-1)*2 + 1;
        }else{
           cout<<(k-(n/2))*2;
        }
    }
    else 
	if(k>n/2+1)
		cout<<(k-((n/2)+1))*2;
	else cout<<k*2-1;

}
int main () {
    fast();

    solve();

}