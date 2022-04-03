#include <bits/stdc++.h>
using namespace std;
#define cin(vec) for(auto& i : vec) cin >> i
#define fixed(n) fixed << setprecision(n)
#define all(vec) vec.begin(), vec.end()
#define sz(x) int(x.size())
#define ll long long

void fast(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
}
void solve(){
    int n,m;
    cin>>n>>m;
    int n1 = 2*n+1;
    int m1 = 2*m+1;
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            if(i%2==0){
                if(i<2&&j<2){
                    cout<<'.';
                }else if(j%2==0){
                    cout<<'+';
                }else{
                    cout<<'-';
                }
            }else{
                if(i<2&&j<2){
                    cout<<'.';
                }else if(j%2==0){
                    cout<<'|';
                }else{
                    cout<<'.';
                }
            }
        }
        cout<<endl;
    }
}
int main () {
    fast();
    int t;
    cin>>t;
    int i = 1;
    while(t--){
        cout<<"Case #"<<i<<": "<<endl; 
       solve();
       i++;
    }

}