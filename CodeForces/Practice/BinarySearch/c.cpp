//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C

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
bool can(int val,int key){
    return val>=key;
}
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        int l = 0,r=n-1;
        int m;
        int ans = n;
        while(l<=r){
            m = (l+r)/2;
            if(can(a[m],x)){
                ans = m;
                r=m-1;
            }else{
                l = m+1;
            }
        }
        cout<<ans+1<<endl;
        // if(ans>-1){
        //     cout<<ans+1<<"\n";
        // }else{
        //     cout<<1<<"\n";
        // }
    }



}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}