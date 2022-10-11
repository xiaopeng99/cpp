#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=0,t=0,t1=0,count=1,max=1;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        t=i;
        for(int j=i+1;j<n;j++){
            if(arr[t]>arr[j]){
                t=j;
            }
        }
        t1=arr[i];
        arr[i]=arr[t];
        arr[t]=t1;
    }
    for(int i=0;i<n;i++){
        count=1;
        for(int j=0;j<n-1;j++){
            if((arr[j+1]-arr[j])==1){
                count++;
            }else{
                break;
            }
        }
        if(count>max){
            max=count;
        }
    }
    cout<<max;
    return 0;
}