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
    string s;
    cin>>s;
    int res = 0;
    int cnt0=0,cnt1=0;
    for(int i=0;i<n;i++){
        if(s[i] == '0')cnt0++;
        else cnt1++;
    }
    // if(cnt1>cnt0){
    //     cout<<0<<endl;
    //     return;
    // }

    for(int i=0;i<n-1;i++){
        if(s[i]== '0' && s[i+1]=='1'&&s[i+2]=='0'&&i<n-2){
            res+=1;
            cnt1+=1;
        }
        else if(s[i]=='0'&&s[i+1]=='0'){
            res+=2;
            cnt1+=2;
        }
    }
    cout<<res<<endl;

}
int main () {
    fast();
    int t;
    cin >> t;
    while(t--)
        solve();
}