#include <bits/stdc++.h>
using namespace std;
#define cin(vec) for(auto& i : vec) cin >> i
#define fixed(n) fixed << setprecision(n)
#define all(vec) vec.begin(), vec.end()
#define sz(x) int(x.size())
#define ll long long

void fast(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
}
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(cnt<a[i])cnt++;
    }
    cout<<cnt<<endl;
}
int main () {
    fast();
    int t;
    cin>>t;
    int i = 1;
    while(t--){
    //    solve();
       cout<<"Case #"<<i<<": ";
       solve(); 
       i++;
    }

}