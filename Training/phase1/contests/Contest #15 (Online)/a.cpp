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
    int k;
    string s;
    cin>>k;
    cin>>s;
    map<char,int>ma;
    int n = s.length();
    // 5 aaaa
    if(k > n){
        cout<<"NO\n";
        return;
    }
    for(int i=0;i<n;i++)ma[s[i]]++;

    int test = 0;
    for(auto &x:ma){
        // cout<<x.second;
        if(x.second %2 !=0)test++;
    }
    if(test <= k)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}