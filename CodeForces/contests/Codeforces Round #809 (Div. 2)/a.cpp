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
    int n,m;
    cin>>n>>m;
    string s="";
    map<int,int>ma;
    for(int i=0;i<m;i++)s+='B';
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int temp = m+1-x;
        x--;
        temp--;
        if(x<temp && ma[x] == 0){
            s[x] = 'A';
            ma[x]++;
        }else if(temp<x && ma[temp] == 0){
            s[temp] = 'A';
            ma[temp]++;
        }else if(ma[temp]>0){
            s[x] = 'A';
            ma[x]++;
        }else{
            s[temp] = 'A';
            ma[temp]++;
        }

    }
    cout<<s<<endl;
}
int main () {
    fast();
    int t;
    t = 1;
    cin>>t;
    while(t--)
       solve();

}