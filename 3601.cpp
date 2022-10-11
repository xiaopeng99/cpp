#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    long long ans=0,max=0,res=0;
    vector<vector<int>> arr(n,vector<int>(m));
    vector<long long> sum(m);
    vector<long long> tmp(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum[j]=sum[j]+arr[i][j];
            if(max<sum[j]){
                max=sum[j];
            }
        }
        if(ans<=max){
            ans=max+1;
        }
        tmp[i]=ans;
        if(i>=6){
            for(int j=0;j<m;j++){
            sum[j]=sum[j]-arr[i-6][j];
            }
            ans=ans-tmp[i-6];
        }
    }
    cout<<ans;
    return 0;
}