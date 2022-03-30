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


int partitionOfArr(int arr[],int start,int end){
    int left,right,pivotItem = arr[start];
    left = start;
    right = end;
    while(left < right){
        while(arr[left] <= pivotItem){
            left++;
        }
        while(arr[right] > pivotItem){
            right--;
        }
        if(left<right) swap(arr[left],arr[right]);
    }
    arr[start] =arr[right];
    arr[right] = pivotItem;
    return right;
}

int main () {
   
    int arr[] = {15,2,45,12,21,48,12};
    srt(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i];
    }
}