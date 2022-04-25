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

bool isPalindrome(ll n)
{  

    ll divisor = 1;
    while (n / divisor >= 10)
        divisor *= 10;
 
    while (n != 0)
    {
        ll leading = n / divisor;
        ll trailing = n % 10;
 
     
        if (leading != trailing) 
            return false;
 
 
        n = (n % divisor) / 10;
 
  
        divisor = divisor / 100;
    }
    return true;
}


void solve(){
    ll a;
    vector<ll>v;
    cin>>a;
    ll i;
    ll cnt = 0;
    for (i = 1; i * i < a; i++) {
        if (a % i == 0)
            if(isPalindrome(i))cnt++;
    }
    if (i - (a / i) == 1) {
        i--;
    }
    for (; i >= 1; i--) {
        if (a % i == 0)
        {
            if(isPalindrome(a/i)){
                cnt++;
            }
        }
            // v.push_back(a/i);
    }

    // ll cnt = 0;
    // ll m = v.size();
    // for(int j=0;j<m;j++){
    //     if(isPalindrome(v[j])){
    //         cnt++;
    //     }
    // }
    cout<<cnt<<endl;

}
int main () {
    fast();
    int t;
    cin>>t;
    int i = 1;
    while(t--){
        cout<<"Case #"<<i<<": ";
       solve();
       i++;
    }

}