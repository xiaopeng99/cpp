#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

vector<float> path;
float res=200000;
void bck(vector<float> &arr,int startindex,int k,int n){
    vector<float> arr1(arr);
    float ans=0,max1=0,min1=300000,sum=0;
    if(path.size()==k){
        for(int i=0;i<path.size();i++){
            sum=sum+arr1[path[i]];
        }
        float avg=sum/(path.size()*1.0);
        for(int i=0;i<path.size();i++){
            arr1[path[i]]=avg;
        }
        for(int i=0;i<arr1.size();i++){
            if(max1<arr1[i]){
                max1=arr1[i];
            }
            if(min1>arr1[i]){
                min1=arr1[i];
            }
        }
        ans=max1-min1;
        if(res>ans){
            res=ans;
        }
    }
    for(int i=startindex;i<n&&path.size()<k;i++){
        path.push_back(i);
        bck(arr,i+1,k,n);
        path.pop_back();
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<float> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bck(arr,0,k,n);
    cout<<res;
    return 0;
}