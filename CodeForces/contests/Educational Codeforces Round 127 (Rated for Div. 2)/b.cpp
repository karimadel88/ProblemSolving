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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp = 0;
    bool chk = true;
    for(int i=1;i<n;i++){
        temp += a[i]-a[i-1]-1;
    }
    if(temp<=2){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    //     if(a[i]-a[i-1] == 3 && chk == true && temp<1){
    //         a[i-1]++;
    //         a[i]--;
    //         chk =false;
    //         continue;
    //     }
    //     if(a[i]-a[i-1] == 3 && chk == false){
    //         cout<<"NO\n";
    //         return;
    //     }
    //     if(a[i]-a[i-1] == 2){
    //         a[i]--;
    //         // continue;
    //     }else{
    //         cout<<"NO\n";
    //         return;
    //     }
    // }
    // cout<<"YES\n";

}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}