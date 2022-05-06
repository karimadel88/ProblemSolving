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
    string s;
    cin>>s;
    int n = s.size();
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(s[0] == '0'){
        cout<<1<<endl;
        return;
    }
    int ans =0;
    int end = n-1;
    int start = 0;
    for(int i=n-1;i>=0;i--){
        if(s[i] == '1'){
            start = i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            end = i;
            break;
        }
    }
    ans = end - start;
    cout<<ans+1<<endl;
    // bool chk = false;
    // if(s[0] == '?'){
    //     ans++;
    //     chk = true;

    // }
    // for(int i=1;i<n;i++){
    //     if(s[i]=='0'&&s[i-1]=='1'){
    //         ans+=2;
    //         cout<<ans<<endl;
    //         return;
    //     }
    //     if(s[i]=='0'){
    //         ans++;
    //         cout<<ans<<endl;
    //         return;
    //     }
    //     if(s[i] == '?'&&s[i-1]=='?'){
    //         ans++;
    //         chk = true;
    //     }
    //     // if(s[i] =='?' && s[i-1] == '1'){
    //     //     ans+=2;
    //     // }
    //     if(s[i] == '?' && s[i-1]== '1'){
    //         chk = true;
    //     }
    //     if(s[i] == '1' && chk) ans--;
    // }
    // cout<<ans<<endl;


}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}