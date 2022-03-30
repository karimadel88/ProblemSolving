#include <bits/stdc++.h>
using namespace std;
#define cin(vec) for(auto& i : vec) cin >> i
#define fixed(n) fixed << setprecision(n)
#define ll long long

void fast(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif
}
void solve(){
    int n,m;
    cin>>n>>m;
    int curI,curJ;
    char a[7] = {'I','E','H','O','V','A','#'};
    char ma[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ma[i][j];
            if(ma[i][j] == '@'){
                curI = i,curJ = j;
            }
        }
    }
    // cout<<curI<<curJ;
    for(int i=0;i<7;i++){
        // cout<<i<<" - ";
        if(curI != 0 && ma[curI-1][curJ] == a[i] && curI>-1 &&curJ >-1 ){
            if(i == 6)
                cout<<"forth";
            else
                cout<<"forth ";
            curI = curI -1;
        }
        else if(curJ != m-1 && ma[curI][curJ+1] == a[i] && curI>-1 &&curJ >-1){
             if(i==6)
                cout<<"right";
             else 
                cout<<"right ";
             curJ = curJ+1;
        }
        else if(curJ != 0 && ma[curI][curJ-1] == a[i] && curI>-1 && curJ >-1){
            if(i==6)
             cout<<"left";
            else
                cout<<"left ";
             curJ = curJ - 1;
        }        
    }
}
int main () {
    fast();
    int t;
    cin >> t;
    while(t--){
        solve();
        if(t!=0)
        cout<<endl;
    }

}