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
        ll a,b;
        cin>>a>>b;
        if(a==0){
            cout<<1<<endl;
            return;
        }
        
        cout<<a+(b*2)+1<<endl;
    }
    int main () {
        fast();
        int t;
        cin>>t;
        while(t--)
        solve();

    }