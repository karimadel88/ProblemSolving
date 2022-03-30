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
    map<int , int>m;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i] = x;
        m[x] = 1;
    }
    for(int i=0;i<n-1;i++){
        if(m[abs(a[i] - a[i+1])] > 0){
            cout<<i+1<<" "<<i+2;
            return;
        }
    }
    cout<<endl;
}
int main () {
    fast();
    int t;
    cin >> t;
    while(t--)
        solve();

}