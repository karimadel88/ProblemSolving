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
    int n,x;
    cin>>n>>x;
    int a[n];
    ll sum = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
        a[i] = x;
    }
    sort(a,a+n);
    int ans = 0;
    int cnt = n;
    int l = 1;
    while(n>0){
        if(sum<=x){
            ans+=n;
        }else{
            n--;
            sum-=a[n]+l;
            l++;
        }
        sum+=n;
    }
    cout<<ans<<endl;

}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}