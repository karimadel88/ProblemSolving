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
    int res = 0;
    int i = 0;
    for(i=0;i<n-1;){
        // (( or ))
        if(s[i] == s[i+1]){
            res++;
            i = i+2;
            continue;
        }
        // () لسه عايز )
        if(s[i] == '(' && s[i+1] == ')'){
            res++;
            i=i+2;
            continue;
        }
        int temp = -1;
        for(int j = i+1;j<n;j++){
            if(s[j] == ')'){
                res++;
                temp = j;
                break;
            }
        }
        if(temp == -1) break;
        i = temp + 1;
        
    }
    cout<<res<<" "<<n-i<< endl;
}
int main () {
    fast();
    int t;
    cin >> t;
    while(t--)
        solve();
}