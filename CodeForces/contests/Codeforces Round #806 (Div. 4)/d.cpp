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
    string a[n];
    map<string,bool>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]] = true;
    }
    
    for(int i=0;i<n;i++){
        int x = a[i].size();
        string s = "";
        bool chk = false;
        string temp = a[i];
        for(int j=0;j<x;j++){
            if(m[a[i].substr(0,j)] && m[a[i].substr(j,x-1)]){
                cout<<1;
                chk = true;
                break;
            }
        }
        if(!chk){
            cout<<0;
        }
    }
    cout<<endl;

}
int main () {
    fast();
    int t;
    t = 1;
    cin>>t;
    while(t--)
       solve();

}