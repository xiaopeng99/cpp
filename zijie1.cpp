#include<iostream>
#include<vector>
#include<numeric>

using namespace std;


int f1(vector<int> &arr){
    int n=arr.size();
    vector<int> tmp(n);
    int sum=0,max=0;
    for(int i=0;i<n;i++){
        sum=arr[i];
        for(int j=i+1;j<n;j++){
            sum=sum+arr[j];
            if(sum==0&&tmp[i]<(j-i+1)){
                tmp[i]=(j-i+1);
            }
        }
        if(max<tmp[i]){
            max=tmp[i];
        }
    }
    return max;
}

int main(){
    int n;
    vector<int> arr;
    while(scanf("%d",&n)!=EOF){
        arr.push_back(n);
    }
    cout<<f1(arr);
    return 0;
}