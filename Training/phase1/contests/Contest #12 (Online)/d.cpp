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
    int res = n;
    string s;
    cin>>s;
    int temp = res/2;
    while(temp >= 2){
        if(s.substr(0,temp) == s.substr(temp,temp)){
            res = res - temp + 1;
            cout<<res<<"\n";
            return;
        }
        temp--;
    }
    cout<<res<<"\n";
}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}