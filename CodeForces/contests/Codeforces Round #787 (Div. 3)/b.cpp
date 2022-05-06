#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define test   int t; cin>>t; while(t--)
void fast(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin.tie(0); cin.sync_with_stdio(0);
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout); 
    #endif

}

int main() {
    fast();
    int t ;
    cin >> t ;
    while (t--)
     {
        bool flag = 1 ;
        int  c = 0 , n ;
        cin >> n ;
        int  arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        for (int i = n-2 ; i >= 0 && flag ; i--) {
            while (1){
                if(arr[i+1]> arr[i]){
                    break;
                }else{
                    arr[i]/= 2 ;
                    if(arr[i]==0 && i!=0){
                        cout << -1 << endl;
                        flag = 0;
                    }
                    c++ ;
                }

            }
        }
        if(flag) { cout << c << endl; }
        else { continue; }
    }
}
