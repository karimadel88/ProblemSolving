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
    int l = n-1;
    int r = 0;
    // > --- after
    // < --- before
    for(int i=0;i<n;i++){
        if(s[i] == '>'){
            l = i;
            break;
        }
    }
    for(int i = n-1;i>=0;i--){
        if(s[i] == '<'){
            r = i;
            break;
        }
    }
    
    if(l<(n-r-1)){
        cout<<l<<endl;
    }else{
        cout<<n-r-1<<endl;
    }
}
int main () {
    fast();
    int t;
    t = 1;
    cin>>t;
    while(t--)
       solve();

}