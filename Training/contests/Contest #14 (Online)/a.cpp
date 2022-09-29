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
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt = 0;
    int j = n-1;
    int l = 0;
    for(int i=0;i<n;i++){
        if(l<n && a[l] <= k )cnt++,l++;
        else if(j>=1&&a[j] <= k)cnt++,j--;
        else break;
    }
    cout<<cnt;

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}