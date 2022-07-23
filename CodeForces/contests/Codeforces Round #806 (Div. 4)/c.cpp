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
    for(int i=0;i<n;i++){
        int x;
        string s;
        cin>>x;
        cin>>s;
        for(int j=0;j<x;j++){
            if(s[j] == 'D'){
                a[i]++;
                if(a[i] == 10)a[i]=0;
    
            }
            else if(s[j] == 'U'){
                a[i]--;
                if(a[i] == -1)a[i]=9;
            }
        }
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
}
int main () {
    fast();
    int t;
    t = 1;
    cin>>t;
    while(t--)
       solve();

}