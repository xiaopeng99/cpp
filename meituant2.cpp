#include<iostream>
#include<vector>
#include<map>
using namespace std;



int main(){
    int n=0,sum=0,m=0;
    cin>>n;
    vector<int> pos(n);
    map<int,int> wor;
    for(int i=0;i<n;i++){
        cin>>pos[i];
    }
    for(int i=0;i<n;i++){
        cin>>m;
        wor[pos[i]]=m;
    }
    int x=1;
    while(x<=n){
        if(wor[x*2]>=wor[2*x+1]){
            sum=wor[x*2]+sum;
            x=x*2;
        }else if(wor[x*2]<wor[2*x+1]){
            sum=wor[x*2+1]+sum;
            x=x*2+1;
        }else{
            x++;
        }
    }
    cout<<sum;
    return 0;
}