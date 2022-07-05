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
    int n;
    cin>>n;
    int a[n];
    int cnt = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] < 0){
            cnt++;
        }
    }
    for(int i=0;i<n;i++){
        if(cnt>0){
            if(a[i] > 0)a[i]*=-1;
            cnt--;
        }else{
            if(a[i]< 0)a[i]*=-1;
        }   
    }
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";

}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}