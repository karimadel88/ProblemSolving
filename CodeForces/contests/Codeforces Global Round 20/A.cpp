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
    double r,a,b;
    double PI = 3.141592653589;
    cin>>r>>a>>b;
    double first = PI * r * r;
    double ans = first;
    while(true || first == 0){
        r = r*a;
        // cout<<r<<endl;
        first =  PI*r*r;
        ans+=first;
        if((int)r/(int)b==0){
            break;
        }else{
            r = floor(r/b);
            // cout<<r<<endl;
            first = PI * r * r;
            ans+= first;
        }

    }
    cout<<fixed<<setprecision(6)<<ans<<endl;    

}
int main () {
    fast();
    int t;
    cin>>t;
    int i = 1;
    while(t--){
       cout<<"Case #"<<i<<": ";
       solve();
       i++;
    }

}