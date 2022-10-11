#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n=0,x=0,count=0,mid=0;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0],max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    mid=(min+max)/2;
    for(int i=0;i<n;i++){
        if((arr[i]-mid)<x || (mid-arr[i])<x){

        }else{
            count++;
        }
    }
    cout<<count;
    return 0;
}