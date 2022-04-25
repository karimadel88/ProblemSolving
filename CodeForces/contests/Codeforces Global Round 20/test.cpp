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
    deque<int>d;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        d.push_back(x);
    }
    int temp = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(temp>d.front() && temp > d.back())break;
        if(d.back()<=d.front() && temp <=d.back()){
            // if(temp > d.back())break;
            temp = d.back();
            d.pop_back();
            ans++;
        }else if(d.front()<d.back()&&temp<=d.front()){
            // if(temp > d.front())break;
            temp = d.front();
            d.pop_front();
            ans++;
        }        
    }
    cout<<ans;

}
int main () {
    fast();
    int t;
    t = 1;
    while(t--)
       solve();

}