#include <bits/stdc++.h>
using namespace std;
#define cin(vec) for(auto& i : vec) cin >> i
#define fixed(n) fixed << setprecision(n)
#define all(vec) vec.begin(), vec.end()
#define sz(x) int(x.size())
#define ll long long

void fast(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    // #endif
}
void solve(){
}
int main () {
    fast();
    int t;
    int step,mod;
    while(cin>>step>>mod){
            int temp = 0;
            set<int>s;
            int n = mod;
            for(int i=0;i<n;i++){
                if(temp >= mod){
                    temp %=mod;
                }
                s.insert(temp);
                temp+=step;
            }
            cout << setw(10) << step << setw(10) << mod << "    ";
            if((int)s.size() == mod)cout << "Good Choice\n\n";
            else cout << "Bad Choice\n\n";
    }
       
}
