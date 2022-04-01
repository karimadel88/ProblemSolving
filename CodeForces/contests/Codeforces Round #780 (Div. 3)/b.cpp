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
void solve2(){}
void solve(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1&&a[0]==1){
        cout<<"YES"<<endl;
        return;
    }else if(n==1&&a[0]!=1){
        cout<<"NO"<<endl;
        return;
    }
    sort(a,a+n);
    if(n%2==0){
        sum = a[0];
        for(int i=1;i<n;i++){
            sum = abs(sum);
            sum-=a[i];
        }
        if(abs(sum)==1){
            cout<<"YES"<<endl;
            return;
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }
    int min = a[0];
    sum = a[1];
    for(int i=2;i<n;i++){
        sum =a[i] - sum;
    }
    if(sum==min){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main () {
    fast();
    int t;
    cin>>t;
    while(t--)
       solve();

}