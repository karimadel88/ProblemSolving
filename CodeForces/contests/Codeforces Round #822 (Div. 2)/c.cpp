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
    vector<int>t;
    
    for(int i=1;i<=n;i++){
        if(s[i-1] != '1')
        {
            t.push_back(i);
        }
    }
    if(t.size() == 0) {
        cout<<0<<endl;
        return;
    }
    ll res = 0;
    vector<int>temps(n + 1, 0);
    temps.push_back(res);
    for(int i=0;i<t.size();i++){
        int sItem = 1;
        int chk = true;
        while (chk){
            bool sear = binary_search(t.begin(),t.end(),t[i] * sItem);
            if(sear) chk = false;
            int test = sItem*t[i];
            if(!temps[test]){
                res += t[i];
            }
            temps[test] = 1;
            sItem++;
        }
    }
    cout<<res<<endl;

}
int main () {
    fast();
    int t;
    t = 1;
    cin>>t;
    while(t--)
       solve();

}