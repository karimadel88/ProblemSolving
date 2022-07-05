#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace chrono;
typedef long long ll;
typedef long long int lli;


#define vll vector<ll>
#define vvll vector<vll>
#define vcc vector<char>
#define endl "\n"
#define vbb vector<bool>

#define takeINP(arr,n) for(long long int i=0;i<n;i++) cin>>arr[i];
#define f(i,s,e) for(long long int i=s;i<e;i++)

#define print(arr,s,e) f(i,s,e) cout<<arr[i]<<" "; cout<<endl;
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define vll vector<ll>

void solve(){
    ll n,m; cin>>n>>m;
    vvll arr(n,vll(m));
    f(i,0,n){
        f(j,0,m) cin>>arr[i][j];
    }
    ll fl=0;
    ll fi=-1,si=-1;
    f(i,0,n){
        f(j,1,m){
            if(arr[i][j]<arr[i][j-1]){
                fl=1;
                vll tmp=arr[i];
                sort(all(tmp));
                f(j,0,m){
                    if(arr[i][j]!=tmp[j]){
                        if(fi==-1) fi=j;
                        else if(si==-1) si=j;
                        else {
                            cout<<"-1\n";
                            return;
                        }
                    }
                }
            }
            if(fl) break;
        }
        if(fl) break;
    }
    if(fl==0){
        cout<<"1 1\n";
        return;
    }
    if(fi==-1 || si==-1){
        cout<<"-1\n";
        return;
    }
    f(i,0,n){
        swap(arr[i][fi],arr[i][si]);
    }
    f(i,0,n){
        f(j,1,m){
            if(arr[i][j]<arr[i][j-1]){
                cout<<"-1\n";
                return;
            }
        }
    }
    cout<<fi+1<<" "<<si+1<<endl;
}

int main(){
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
//C codeforces