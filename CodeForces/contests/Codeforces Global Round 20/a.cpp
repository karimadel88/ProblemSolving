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
    int a[n];
    int temp = -1;
    for(int i=0;i<n;i++){
        int x;
        if(i==0)temp = x;
        cin>>x;
        a[i]=x;
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        if(a[i]>1){
            
        }
    }
    // if(a[n-1] == 1){
    //     cout<<"maomao90\n";
    // }else{
    //     cout<<"errorgorn\n";
    // }
    // ll s = a.size();
    // if(s==1&&temp==1){
    //     cout<<"maomao90\n";
    // }else{
    //     cout<<"errorgorn\n";
    // }
 
    

    // if(a[n-1] == 1){
    //         if(n %2==0){
    //             cout<<"errorgorn\n";
    //             return;
    //         }else{
    //             cout<<"maomao90\n";
    //         }
    // }
    // else{
    //         if(n %2==0){
    //             cout<<"maomao90\n";
    //             return;
    //         }else{
    //             cout<<"errorgorn\n";
    //         }
    // }
    // // for(int i=0;i<n;i++){
    // //     if(a[i]%2==0)continue;
    // //     else{
    // //         int temp = i+1;
    // //         if(temp %2==0){
    // //             cout<<"errorgorn\n";
    // //             return;
    // //         }else{
    // //             cout<<"maomao90\n";
    // //         }
    // //     }
    // // }

}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}