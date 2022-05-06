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
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        int l = 0,r=n-1;
        bool ans = false;
        int mid;
        while(l<=r){
            mid = (l+r)/2;
            if(x == a[mid]){
                ans = true;
                break;
            }else if(a[mid]<x){
                l= mid+1;
            }else{
                r = mid-1;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}