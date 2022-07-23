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
    int m = 2*n;
    int a[m];
    map<int,int>ma;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int l = 0,r=n-1;
    int cnt = 0;
    while(l<r){
        if(abs(a[l]-a[r])>=x){
            l++;
            r--;
            cnt++;
        }else{
            r--;
        }
    }
    cout<<cnt;
    if(cnt == n){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

    

}
int main () {
    fast();
    int t;
    t = 1;
    cin>>t;
    while(t--)
       solve();

}