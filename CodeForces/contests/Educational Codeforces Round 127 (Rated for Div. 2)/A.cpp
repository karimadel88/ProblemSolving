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
    int cnt=0;
    int n = s.size();
    bool chk = true;
    for(int i=0;i<n;i++){
        if(s[i] == '@' && i==0){
            cout<<"NO\n";
            return;
        }else{
            if(chk){
                cnt = i;
                chk = false;
            }
        }
        if(s[i]=='.' && i == (n-1)){
            cout<<"NO\n";
            return;
        }
        if(s[i]=='.' && i-cnt >1){
            cout<<"YES\n";
            return;
        }

    }
    cout<<"NO\n";

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}