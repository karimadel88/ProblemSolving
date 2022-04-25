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

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
  
void solve(){
    string s;
    cin>>s;
    int n = s.size();
    int cnt = 0;

    for(int i=0;i<n;i++){
        if(s[i] == 'a'){
            cnt = 0;
            for(;i<n;i++){
                if(s[i] == 'b'){
                    // i--;
                    break;
                }
                cnt++;
            }
            // cout<<cnt<<"\n";
            if(cnt ==1){
                cout<<"NO\n";
                return;
            }
        }
        if(s[i] == 'b'){
            cnt = 0;
            for(;i<n;i++){
                if(s[i] == 'a'){
                    i--;
                    break;
                }
                cnt++;
            }
            // cout<<cnt<<endl;
            if( cnt ==1){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";

}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}