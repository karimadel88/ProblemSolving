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
        freopen("./../input.txt", "r", stdin), freopen("./../output.txt", "w", stdout); 
    #endif
}
void solve(){
    int siz = 10e5 + 7;
    int freq[siz] = {};
    int n,q;
    cin>>n>>q;
    for(int i=0;i<q;i++){
        int c,x;
        cin>>c>>x;
        if(c==1){
            freq[x]++;
        }else{
            cout<<freq[x]<<"\n";
        }

    }

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}