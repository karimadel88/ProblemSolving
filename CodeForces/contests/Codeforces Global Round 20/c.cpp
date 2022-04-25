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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = 0;
    int temp1 = 2,temp2 = 0;
    for(int i=0;i<n-1;i++){
        if(a[i] == a[i+1]){
            temp1 = min(temp1,i);
            temp2 = max(temp2,i);
        }
    }
    if(temp1 == temp2 || temp1 == 2){
        cout<<0<<endl;
    }else if(temp2 - temp1 < 3){
        cout<<1<<endl;
    }else{
        cout<<temp2-temp1-1<<endl;
    }
}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}