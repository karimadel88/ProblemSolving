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
bool checkSubSequence(string I,string P){
    int n = I.size();
    int m = P.size();
    int p1=0,p2=0;
    while(p1<n && p2<m){
        if(I[p1]==P[p2]){
            p1++,p2++;
        }else{
            p2++;
        }
    }
    if(p1==n) return true;
    return false;
}
int main () {
    fast();
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        map<char,int>m;
        string s1,s2;
        cin>>s1>>s2;
        bool found = checkSubSequence(s1,s2);
        if(!found)
            cout << "Case #" << i << ": "<<"IMPOSSIBLE"<<endl;
        else{
            int ns1 = s1.size(),ns2= s2.size();
            cout << "Case #" << i << ": "<<ns2-ns1<<endl;
        }
    }

}