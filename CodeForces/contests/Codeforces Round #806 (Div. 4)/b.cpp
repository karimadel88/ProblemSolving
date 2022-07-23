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
        int freq[26] = {};
        string s;
        int n;
        cin>>n;
        cin>>s;
        
        int sum = 0;
        for(int i=0;i<n;i++){
            if(freq[s[i]-'A'] == 0){
                sum+=2;
                freq[s[i]-'A'] = 1;
            }
            else sum+=1;
        }
        cout<<sum<<endl;

    }
    int main () {
        fast();
        int t;
        cin>>t;
        while(t--)
        solve();

    }