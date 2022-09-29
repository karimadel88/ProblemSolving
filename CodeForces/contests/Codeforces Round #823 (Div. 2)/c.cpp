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
int numFreq [10];
void solve(){
    string s;
    cin>>s;
    string res = "";
    int n = s.size(); 
    char minC = '9';
    for(int i=n-1;i>=0;i--){
        if(s[i] <= minC){
            int pso = s[i] - '0';
            numFreq [pso]++;
            minC = s[i];
        }else{
            numFreq[min((s[i] - '0')+1,9)]++;
        }
    }
    
    for(int i=0;i<10;i++){
        while(numFreq[i] != 0){
            cout<<i;
            numFreq[i]--;
        }
    }
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