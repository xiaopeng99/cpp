#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,len=0,max=1,start=0;
    cin>>n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    vector<int> arr3(n-1);
    vector<int> arr4(n-1);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n-1;i++){
        arr3[i]=arr1[i+1]-arr1[i];
    }
    for(int i=0;i<n-1;i++){
        arr4[i]=arr2[i+1]-arr2[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr3[i]!=arr4[i]){
            start=i;
        }
        if(max<i-start+1){
            max=i-start+1;
        }
    }
    cout<<max;
    return 0;
}