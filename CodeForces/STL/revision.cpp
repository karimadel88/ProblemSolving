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
void upadate (vector<int> &arr ,int value,int size){
    for (int i = 0; i < size; i++)
    {
        arr[i] *= value;
        /* code */
    }
    
}

void print (vector<int> &arr ,int size){
    for(int i=0;i<size;i++)cout<<arr[i]<<" ";
    cout<<endl;
}
int main () {
    fast();
    int t;
    cin>>t;

    while(t--){
        string s;
        char s2;
        cin>>s>>s2;
        int n = s.size();
        int index = -1;
        for(int i=0;i<n;i++){
            if(s2==s[i]){
                index = i;
                break;
            }
        }
        if(index == -1){
            cout<<"NO"<<endl;
            continue;
        }
        if(index == n-1){
            cout<<"YES"<<endl;
            continue;
        }
        if(index == 0){
            cout<<"YES"<<endl;
            continue;
        }
        if((index-0)%2==0 && ((n-index)+1)%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }

    
}