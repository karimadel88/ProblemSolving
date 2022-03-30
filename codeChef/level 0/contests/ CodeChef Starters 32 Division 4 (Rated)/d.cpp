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
    int n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    if(x>y){
        int k = -1;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                k++;
                swap(s[i],s[k]);
            }
        }
        int pos1 = 0;
        int pos2 = 0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0'&&s[i+1]=='1'){
                pos1++;
                i++;
            }
        }
        for(int i=0;i<n-1;i++){
            if(s[i]=='1'&&s[i+1]=='0'){
                pos2++;
                i++;
            }
        }
        cout<<pos1*x+pos2*y<<endl;

    }
    else{
        int k = -1;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                k++;
                swap(s[i],s[k]);
            }
        }
        int pos1 = 0;
        int pos2 = 0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0'&&s[i+1]=='1'){
                pos1++;
                i++;
            }
        }
        for(int i=0;i<n-1;i++){
            if(s[i]=='1'&&s[i+1]=='0'){
                pos2++;
                i++;
            }
        }
        cout<<pos1*x+pos2*y<<endl;
    }
}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}