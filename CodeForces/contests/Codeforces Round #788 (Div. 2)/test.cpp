#include <bits/stdc++.h>

#define ll long long
#define str string
#define db double

#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdb pair<db, db>

#define vi vector<int>
#define vl vector<ll>
#define vdb vector<db>
#define vb vector<bool>
#define vs vector<str>
#define vpii vector<pii>
#define vpll vector<pll>
#define vpd vector<pd>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)

#define pb push_back
#define pf push_front

#define FOR(i, a, b) for(int i=(int)a;i<=(int)b;++i)
#define ROF(i, a, b) for(int i=(int)a-1;i>=(int)b;i--)
#define rep(a, x) for(auto& a : x)

using namespace std; 

const int MOD=1e9 + 7;
const int MAXN = 60;

void in(){
    ll n;
    cin >> n;
    ll a[n+1],d=0;
    cin >> a[1];
    if (a[1]<0) d++;
    bool bl=false;
    FOR(i,2,n) {
        cin >> a[i]; if (a[i]<0) d++;
        if (a[i-1]>a[i]) {bl=true;}
    }
    if (!bl) {cout << "YES"; return;}
    ll d2=1;
    FOR(i,1,n-1){
        if (abs(a[i])<abs(a[i+1])) break;
        d2++;
    }
    if (d2==d) cout << "YES";
    else cout << "NO";
}
int main()
{
    IOS;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    ll t; cin >> t;
    while (t--)
    {
        in();
        cout << '\n';
    }
    return 0;

}
