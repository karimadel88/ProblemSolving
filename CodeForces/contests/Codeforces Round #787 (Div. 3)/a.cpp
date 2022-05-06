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
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    if(x==0 &&y==0){
        cout<<"YES\n";
        return;
    }
    x -= a;
    y -= b;
    if(x<=0 && y<=0){
        cout<<"YES\n";
        return;
    }
    if(x>0 && y>0){
        c-=x;
        c-=y;
        if(c<0){
            cout<<"NO\n";
            return;
        }
        cout<<"YES\n";
        return;
    }
    if(x>0){
        c-=x;
        if(c<0){
            cout<<"NO\n";
            return;
        }
        cout<<"YES\n";
        return;
    }
    if(y>0){
        c-=y;
        if(c<0){
            cout<<"NO\n";
            return;
        }
        cout<<"YES\n";
        return;
    }

}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}