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
    int n,d;
    cin>>n>>d;
    int a[n];
    int cnt1 = 0;
    int cnt0 = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1)cnt1++;
        else cnt0++;
    }
    int ans = 0;
    if(cnt0>cnt1){
        for(int i=0;i<n;i++){
            if(a[i] == 0){
                i++;
                ans++;
                for(;i<n;i++){
                    if(a[i]==1)break;
                }
            }
        }
    }
    if(cnt0<cnt1){
        for(int i=0;i<n;i++){
            if(a[i] == 1){
                i++;
                ans++;
                for(;i<n;i++){
                    if(a[i]==0)break;
                }
            }
        }
    }else{
        int ans2=0,ans3=0;
        for(int i=0;i<n;i++){
            if(a[i] == 1){
                i++;
                ans2++;
                for(;i<n;i++){
                    if(a[i]==0)break;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(a[i] == 0){
                i++;
                ans3++;
                for(;i<n;i++){
                    if(a[i]==1)break;
                }
            }
        }
        ans = min(ans2,ans3);
        
    }
    cout<<ans<<endl;    

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}