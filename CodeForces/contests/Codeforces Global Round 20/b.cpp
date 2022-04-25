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
        cout<<"NO\n";
        return;
    }
    if(n==2 && s=="AB"){
        cout<<"YES\n";
        return;
    }else if(n==2){
        cout<<"NO\n";
        return;
    }

    int cntA=0,cntB=0;
    bool chk = true;
    for(int i=0;i<n;i++){
        if(s[i] == 'A')cntA++;
        else{
            cntB++;
        }
        if(cntB>cntA)chk = false;

    }
    if(s[n-1] != 'B'){
        cout<<"NO\n";
        return;
    }
    if(chk){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    // int cnt = 0;
    // for(int i=0;i<n;i++){
    //     int cnt = 0,cntB=0;
    //     if(s[i]== 'A'){
    //         cnt++;
    //         i++;
    //         for(;i<n;i++){
    //             if(s[i]=='A'){
    //                 cnt++;
    //             }else if(s[i]=='B'){
    //                 cntB++;
    //                 i++;
    //                 for(;i<n;i++){
    //                     if(s[i]=='B'){
    //                         cntB++;
    //                     }
    //                     if(s[i]=='A'&&i==(n-1)){
    //                         cout<<"NO\n";
    //                         return;
    //                     }
    //                     if(s[i]=='A'){
    //                         break;
    //                     }
    //                 }
    //             }
    //         }
    //     }else{
    //         cout<<"NO\n";
    //         return;
    //     }
    //     if(cntB>cnt){
    //         cout<<"NO\n";
    //         return;
    //     }
    // }
    //     cout<<"YES\n";
    
    // // for(int i=1;i<n-1;i++){
    // //     if(s[i] == 'A')continue;
    // //     if(s[i]=='B' &&s[i-1]=='A'&&s[i+1]=='A'){
    // //         continue;
    // //     }else{
    // //         cout<<"NO\n";
    // //         return;
    // //     }
    // // }
    // // if(s[n-1] == 'B')
    // //     cout<<"YES\n";
    // // else
    // //     cout<<"NO\n";
    // // for(int i=0;i<n;i++){
    // //     if(s[i] == 'A'){
    // //         for(;i<n;i++){
    // //             if(s[i]!='B'){
    // //                 continue;
    // //             }
    // //         }
    // //     }
    // // }
    // // if(n==1){
    // //     cout<<"NO\n";
    // //     return;
    // // }
    // // if(s[n-1] == 'A'){
    // //     cout<<"NO\n";
    // //     return;
    // // }
    // // for(int i=1;i<n;i++){
    // //     if(s[i] == 'B'&&s[i-1]!='A'){
    // //         cout<<"NO\n";
    // //         return;
    // //     }
    // // }
    // // cout<<"YES\n";
}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}