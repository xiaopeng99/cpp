#include<iostream>
#include<vector>
using namespace std;

long long isans(long long n){
    long long ans;
    if(n%233==0){
        ans=n/233;
    }else{
        ans=-1;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    long long num;
    vector<long long> ans(t);
    for(int i=0;i<t;i++){
        cin>>num;
        ans[i]=isans(num);
    }
    for(int i=0;i<t;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}