#include<iostream>
#include<vector>

using namespace std;

vector<int> path;
vector<vector<int>> res;

int backcount(int n,int k,vector<int> &mou,int start){
    vector<int> res(n);
    res[n-1]=0;
    for(int i=0;i<n-2;i++){
        res[i]=1000;
    }
    int t;
    for(int i=n-1;i>=k;i--){
        t=i;
        for(int j=1;j<=k;j++){
            if(mou[t-j]>=mou[t]){
                res[t-j]=min(res[t],res[t-j]);
            }else{
                res[t-j]=min(res[t]-mou[t-j]+mou[t],res[t-j]);
            }
        }
    }
    return res[0];
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> mou(n);
    for(int i=0;i<n;i++){
        cin>>mou[i];
    }
    cout<<backcount(n,k,mou);
    return 0;
}