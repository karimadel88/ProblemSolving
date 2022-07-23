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
int freq[100000+7];
void solve(){
    int n;
    int q;
    cin>>n>>q;
    int a[n];
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(freq[x] == 0)freq[x]++;
    }
    int m = 100000+7;
    for(int i=1;i<m;i++){
        freq[i] += freq[i-1];
    }

    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        cout<<freq[x-1]<<" "<<freq[m-1]-freq[x]<<endl;
    }

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}