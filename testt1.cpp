#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int n,ans;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ans=arr[1]-arr[0];
    for(int i=1;i<n;i++){
        if(ans>(arr[i]-arr[i-1])){
            ans=arr[i]-arr[i-1];
        }
    }
    cout<<ans;
    return 0;
}