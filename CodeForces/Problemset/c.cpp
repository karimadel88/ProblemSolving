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

int main () {
    fast();
    // int t = 1;
    // //cin >> t;
    // while(t--)
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string s;
        cin>>s;
        int n = s.length()-1;
        if(s[n] == 'A' ||s[n] == 'E' ||s[n] == 'I' ||s[n] == 'O' ||s[n] == 'U' ||s[n] == 'a' ||s[n] == 'e' ||s[n] == 'i' ||s[n] == 'o' ||s[n] == 'u'){
            cout<<"Case #"<<i<<": "<<s<<" is ruled by Alice."<<endl;
        }else if(s[n]=='y'){
            cout<<"Case #"<<i<<": "<<s<<" is ruled by nobody."<<endl;

        }else{
            cout<<"Case #"<<i<<": "<<s<<" is ruled by Bob."<<endl;
        }
    }
    
}