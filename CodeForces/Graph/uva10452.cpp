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

int dx[] = {-1,0,0};
int dy[] = {0,1,-1};
string path= "IEHOVA#";
string dir[3] = {"forth","right","left"};
int n,m;
char arr[9][9];
bool isValid (int i,int j){
    if(i>=0 && j>=0 && i<n && j<m){
        return true;
    }
    return false;
}
vector<string>vs;

void dfs(int i,int j,int indx){
    if(indx > path.size()) return;
    for(int k =0;k<3;k++){
        int tox = i+dx[k];
        int toy = j+dy[k];
        if(isValid(tox,toy) && arr[tox][toy] == path[indx]){
            vs.push_back(dir[k]);
            dfs(tox,toy,indx+1);
        }
    }
}


void solve(){
    vs.clear();
    cin>>n>>m;
    int curI,curJ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j] == '@'){
                curI = i,curJ = j;
            }
        }
    }
    dfs(curI,curJ,0);
    cout<<vs[0];
    for(int i=1;i<vs.size();i++){
        cout<<" "<<vs[i];
    }
    cout<<endl;

}
int main () {   
    fast();
    int t;
    cin >> t;
    while(t--)
        solve();

}