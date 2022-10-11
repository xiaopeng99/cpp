#include<iostream>
#include<vector>

using namespace std;

int sum=0;
vector<int> path;

bool f(int k,vector<int> &arr){
    int count=1,max=0;
    for(int i=0;i<arr.size();i++){
        count=1;
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
        }
    }
    if(max>=k){
        return true;
    }
    return false;
}

void backtrack(int n,int k,vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        path.clear();
        for(int j=i;j<arr.size();j++){
            path.push_back(arr[j]);
            if(f(k,path)){
                sum++;
            }
        }
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    backtrack(n,k,arr);
    cout<<sum;
    return 0;
}