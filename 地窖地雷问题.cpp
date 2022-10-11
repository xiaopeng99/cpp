#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,x,y,max,res;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<int> f(n+1);
    vector<int> p(n+1);
    vector<vector<int>> num(n+1,vector<int>(n+1)); 
    while(scanf("%d %d",&x,&y)!=EOF){
        num[x][y]=1;
    }
    f[n]=a[n];
    
    return 0;
}