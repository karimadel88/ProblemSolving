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
    int cnt = 0;
    ll al = 0,b = 0;
    int max1 = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]=x;
    }
    if(n%2==0){
        for(int i=0;i<n;i++){
            al+=a[i];
            b+=a[n-i-1];
            cnt+=2;
            if(al==b){
               max1 = max(max1,cnt);
            }
        }
        cout<<max1<<endl;
        return;
    }else{
        for(int i=0;i<n;i++){
            if(i == (n/2)){
                break;
            }
            al+=a[i];
            b+=a[n-i-1];
            cnt+=2;
            if(al==b){
                max1 = max(max1,cnt);
            }
        }
        cout<<max1<<endl;
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