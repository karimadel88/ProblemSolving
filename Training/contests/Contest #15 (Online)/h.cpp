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
bool isVowel (char c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    return false;
}
void solve(){
    string s;
    cin>>s;
    ll n = s.size();
    ll i=0,j=0,cnt=0,maxi=0,cnt2=0;;
    while(i<=j && j<n){
        cnt = 0;
        while (isVowel(s[j]))
        {
            cnt++;
            j++;
        }
        cnt2 += cnt*(cnt+1)/2;
        maxi = max(maxi,cnt);
        i=j+1;
        j++; 

    }
    cout<<cnt2<<" "<<maxi;
}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}