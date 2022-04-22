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
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min = 0;
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(a[i]<b[i]){
            for(;i<n;i++){
                
            }
        }
    }


}
int main () {
    int num = 1;
    if(num = -1)
        while(num++ < 2)
        cout<<num<<endl;
}