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
    map<char,int>m;
    int cnt = 0;
    set<char>S;
    for(int i=0;i<n;i++){
        m[s[i]]++;
        S.insert(s[i]);
    }

    for(auto &x:S){
        if(m[x]>2){
            int temp = m[x]%2;
            cnt +=temp;
        }
        if(m[x]==1){
            cnt+=1;
        }
    }
    
    cout<<cnt<<endl;

}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}