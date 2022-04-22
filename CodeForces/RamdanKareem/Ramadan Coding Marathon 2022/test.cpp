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
    string s,s2;
    cin>>s;
    s2 = s;
    int n = s.size();
    
    sort(s.begin(),s.end());
    cout<<s2<<" "<<s<<" ";
    if(s2[0]-'0' == s[n-1]-'0'){
        cout<<"Impossible"<<endl;
        return;
    }else{
        char temp = s2[0];
        s2[0] = s[n-1];
        s2[n-1] = temp;
    }
    cout<<s2<<endl;
}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}