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

bool can(ll a[] ,ll k,ll x){
	return (a[k] > x);
}
void solve(){
}
vector<int> solution(vector<int> &A) {
    int n = A.size();
    if(n%2 != 0 )return {};
    vector<int> res;
    sort(A.begin(),A.end());
    for(int i=0;i<n;i++){
        int chk = false;
        for (int j = i+1; j < n; j++)
        {
            if(2*A[i] == A[j] && A[i] != 2){
                chk = true;
                res.push_back(A[i]);
                int m = res.size();
                if(m== n/2){
                    return res;
                }
            }
        }
        if(!chk)return {};
        
    }
    return res;
}

int main () {
        fast();
        int n;
        cin>>n;
        vector<int> v(n,0);
        auto start1 = clock();
        for(int i=0;i<n;i++){
            v[i] = n - i;
        }     
        auto start = clock();
        sort(all(v));
        auto end = clock();
        cout<<end-start;
}