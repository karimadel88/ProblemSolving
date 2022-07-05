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
    // a = c =0 => 2b = n => b =n/2
    // 0 0 0 0 xor 1 1 1 1 = 1 1 1 1
    if(n%2 != 0){
        cout<<-1<<endl;
        return;
    }
    cout<<0<<" "<<n/2<<" "<<0<<endl; 


}
int main () {
    fast();
    int t;
    t = 1;cin>>t;

    while(t--)
       solve();

}