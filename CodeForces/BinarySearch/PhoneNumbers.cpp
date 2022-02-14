//https://codeforces.com/gym/103562/problem/A
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

}
ll sumDigits(int x){
    ll sum = 0;
    while(x!=0){
        sum += x%10;
        x/=10; 
    }
    return sum;
}
int main () {
    fast();
    int n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++){
        string s;
        int x;
        cin>>s;
        cin>>x;
        if(sumDigits(x)%2==0){
            v.push_back(s);
        }
    
    }
    int k = v.size();
    for(int i=0;i<k;i++){
        cout<<v[i]<<endl;
    }
    

}