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
    map<int,int>ma;
    int cnt = 0;
    int a[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i] = x;
        if(x < 0)ma[abs(x)]++;
        
    }
    for(int i=0;i<n;i++){
        int x = a[i];
        if(x>=0 && ma[abs(x)]==0){
            cnt++;
            ma[abs(x)]++;
        }
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