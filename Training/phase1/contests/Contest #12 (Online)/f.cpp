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
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int index1 = -1,index2=-1;
    for(int i=0;i<n;i++){
        if(s1[i] != s2[i] && index1 == -1)index1 =i;
        else if(s1[i] != s2[i] && index2 == -1) index2 = i;
        if(index1 > -1 && index2 >-1)break;
    }
    if(index1 == -1 || index2 == -1){
        cout<<"NO\n";
        return;
    }
    char temp = s1[index1];
    s1[index1] = s2[index2];
    s2[index2] = temp;
    if(s1 == s2){
        cout<<"YES\n";
    }else
        cout<<"NO\n";



}
int main () {
    fast();
    int t;
    t = 1;
    cin>>t;
    while(t--)
       solve();

}