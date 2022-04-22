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

    int even[n];
    int odd[n];
    int cntA =0,cntB = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        if(x%2==0)cntA++;
        else cntB++;
        even[i] =x;
        even[i] = x;
        if((i+1)%2==0){
            even[i]++;
        }
        else{
            odd[i]++;
        }
    }
    if(cntA==n||cntB==n){
        cout<<"YES\n";
        return;
    }

    int cnt1 = 0,cnt2=0;
    for(int i=0;i<n;i++){
        if(even[i]%2==0)cnt1++;
        else cnt2++;
    }
    if(cnt1 == n || cnt2==n){
        cout<<"YES\n";
        return;
    }else{
        cout<<"NO\n";
        return;
    }
    cnt1 = 0,cnt2=0;
    for(int i=0;i<n;i++){
        if(odd[i]%2==0)cnt1++;
        else cnt2++;
    }
    if(cnt1 == n || cnt2==n){
        cout<<"YES\n";
        return;
    }else{
        cout<<"NO\n";
        return;
    }
}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}