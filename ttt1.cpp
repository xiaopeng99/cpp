#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n=0,k=0,count=0,sum=0,t=0;
    vector<int> arr;
    while(scanf("%d",&n)!=EOF){
        arr.push_back(n);
    }
    k=arr[count];
    while(1){
        if(arr[0]>arr[1]){
            sum++;
            t=arr[1];
            for(int i=1;i<count-1;i++){
                arr[i]=arr[i+1];
            }
            arr[count-1]=t;
        }else{
            sum=1;
            t=arr[0];
            for(int i=0;i<count-1;i++){
                arr[i]=arr[i+1];
            }
            arr[count-1]=t;
        }
        if(sum==k){
            break;
        }
    }
    cout<<arr[0];
    return 0;
}