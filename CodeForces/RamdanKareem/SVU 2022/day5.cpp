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
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(abs(x1-x2) == 2 && abs(y2-y1) == 1){
        cout<<"Yes";
        return;
    }
    if(abs(x1-x2) == 1 && abs(y2-y1) == 2){
        cout<<"Yes";
        return;
    }
    cout<<"No";
}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}