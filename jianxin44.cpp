#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> ans(4);
    vector<int> muto(10);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        muto[arr[i]]++;
    }
    ans[3]=muto[7]+muto[8]+muto[9];
    muto[7]=0;
    muto[8]=0;
    muto[9]=0;
    int count=n-(muto[7]+muto[8]+muto[9]);
    while(count)
    return 0;
}