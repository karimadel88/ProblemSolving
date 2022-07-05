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
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> a(n,vector<ll>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    ll row = -1,c = -1;
    ll chk = 0;

    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][j]<a[i][j-1]){
                chk = 1;
                vector<ll>v = a[i];
                sort(v.begin(),v.end());
                j= 0;
                for(int k=0;k<m;k++){
                    j++;    
                    if(a[i][k] != v[k]){
                        if(row == -1)row = k;
                        else if(c == -1)c = k;
                        else{
                            cout<<"-1\n";
                            return;
                        }
                    }
                } 
            }
            if(chk) break;
        }
        if(chk) break;
    }
    if(chk== 0){
        cout<<"1 1"<<endl;
        return;
    }
    if(row==-1 || c==-1){
        cout<<"-1\n";
        return;
    }
    for(int i=0;i<n;i++){
        swap(a[i][row],a[i][c]);
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][j]<a[i][j-1]){
                cout<<"-1\n";
                return;
            }
        }
    }
    cout<<row+1<<" "<<c+1<<endl;
    

}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}