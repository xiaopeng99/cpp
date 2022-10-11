#include<iostream>
#include<vector>
using namespace std;

int win(int n,int x, int y,int k){
    int t=1,ans=0,ans1,ans2;
    ans1=k*y;
    ans2=(n-k+1)*x;
    if(ans1<ans2){
        ans=1;
    }
    if(ans1>ans2){
        ans=-1;
    }
    if(ans1==ans2){
        ans=0;
    }
    return ans;
}

int main(){
    int m=0;
    cin>>m;
    int n=0,x=0,y=0,k=0;
    vector<int> ans(m);
    for(int i=0;i<m;i++){
        cin>>n>>x>>y>>k;
        ans[i]=win(n,x,y,k);
    }
    for(int i=0;i<m;i++){
        if(ans[i]==1){
            cout<<"Win"<<endl;
        }
        if(ans[i]==-1){
            cout<<"Lose"<<endl;
        }
        if(ans[i]==0){
            cout<<"Tie"<<endl;
        }
    }
    return 0;
}