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
    vector<int>a,b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2==0){
           a.push_back(x); 
        }else{
            b.push_back(x);
        }
    }
    int x1 = is_sorted(all(a));
    int x2 = is_sorted(all(b));
    if(x1&&x2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    
}
int main () {
    fast();
    int t = 1;
    cin >> t;
    while(t--)
    solve();

}