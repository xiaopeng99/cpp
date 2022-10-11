#include<iostream>
#include<vector>

using namespace std;

int isans(vector<int> &arr,int n,int k,int x){
    vector<int> brr(arr.size()-k);
    int sum=0,max=0,count=0,max1=0;
    for(int i=0;i<arr.size()-k+1;i++){
        sum=0;
        if(max1<arr[i]){
            max1=arr[i];
        }
        for(int j=0;j<k;j++){
            sum=sum+arr[i+j];
        }
        brr[i]=sum;
        if(max<sum){
            max=sum;
        }
    }
    for(int i=0;i<brr.size();i++){
        count=count+max-brr[i];
    }
    if(count>x){
        return -1;
    }
    return max1;
}

int main(){
    int t;
    cin>>t;
    int n,k,x;
    vector<int> ans(t);
    for(int i=0;i<t;i++){
        cin>>n>>k>>x;
        vector<int> arr(n);
        for(int j=0;j<n;i++){
            cin>>arr[j];
        }
        ans[i]=isans(arr,n,k,x);
    }
    for(auto i:ans){
        cout<<i<<endl;
    }
    return 0;
}