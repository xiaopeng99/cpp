#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

bool iswan(int n){
    vector<int> arr;
    for(int i=1;i<n;i++){
        if(n%i==0){
            arr.push_back(i);
        }
    }
    int sum=accumulate(arr.begin(),arr.end(),0);
    if(sum==n){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> res;
    for(int i=2;i<n;i++){
        if(iswan(i)){
            res.push_back(i);
        }
    }
    if(res.size()>0){
        for(int i=0;i<res.size();i++){
            cout<<res[i];
            if(i!=n-1){
                cout<<" ";
            }
        }
    }else{
        cout<<0;
    }
    return 0;
}