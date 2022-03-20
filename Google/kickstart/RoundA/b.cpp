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

void solve (){
        string s;
        cin>>s;
        ll siz = s.size();
        ll sum = 0;
        for(int i=0;i<siz;i++){
           sum += s[i]-'0'; 
           sum = sum%9;
        }
        int res = (9-sum)%9;
        if(res == 0){
            bool chk = false;
            cout<<s[0];
            for(int i=1;i<s.length();i++){
                int cur = s[i] - '0';
                    if(cur <= res){
                        cout<<cur;
                    }else if(!chk){
                        chk = true;
                        cout<<res<<cur;
                    }else{
                        cout<<cur;
                    }
            }
            if(!chk){
               cout<<res;
            } 

        }else{
            bool chk = false;
            for(int i=0;i<s.length();i++){
                int cur = s[i] - '0';
                    if(cur <= res){
                        cout<<cur;
                    }else if(!chk){
                        chk = true;
                        cout<<res<<cur;
                    }else{
                        cout<<cur;
                    }
            }
            if(!chk){
               cout<<res;
            }
        } 
}
int main () {
    fast();
    int T;
    cin >> T;
    for(int t=1;t<=T;t++){
        cout << "Case #" << t << ": ";
        solve();
        cout<<'\n';
    }

}