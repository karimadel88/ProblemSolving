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
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>k;
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        int l,r;
        cin>>l>>r;

        if(binary_search(l,r,x));
    }

    cout<<cnt<<endl;

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}