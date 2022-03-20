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
ll sumDigit(ll num, ll val){
    if (num < 10) 
    {
        val = val + num;
        return val;
    }
    return sumDigit(num / 10, (num % 10) + val);
}
ll getProduct(ll n){
    if(n == 0){
        return 1 ;
    }
    return (n%10) * getProduct(n/10) ;
}
 
    
int main () {
    fast();
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        ll a,b;
        cin>>a>>b;
        int cnt = 0;
        for(ll j=a;j<=b;j++){
            if(getProduct(j)%sumDigit(j,0) == 0){
                cnt++;
            }
        }
    cout << "Case #" << i << ": " << cnt <<endl;
    }

}