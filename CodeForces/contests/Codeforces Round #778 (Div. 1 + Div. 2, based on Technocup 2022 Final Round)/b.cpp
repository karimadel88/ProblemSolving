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
    int siz = s.length();
    int p1=0,p2=1;
    ll maxPos = -1;
    while(p1<siz){
        ll minPos = 0;
        p2 = p1+1;
        while (p2<siz)
        {
            if(s[p1]==s[p2]){
                maxPos++;
                minPos++;
                break;
            }
            p2++;
        }
        if(!minPos)break;        
        p1++;
    }
    cout<<s.substr(maxPos+1,s.size()-maxPos)<<endl;

}
int main () {
    fast();
    int t;
    cin >> t;
    while(t--)
        solve();

}