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
    if(n>=1900){
        cout<<"Division 1\n";
        return;
    }
    if(n>=1600){
        cout<<"Division 2\n";
        return;
    }
    if(n>=1400){
        cout<<"Division 3\n";
        return;
    }
    cout<<"Division 4\n";

}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}