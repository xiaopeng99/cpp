#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,num,max,k,res=0,start=0;
    cin>>n;
    vector<int> arr(n+1);
    vector<int> f(n+1);
    vector<int> p(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    f[n]=1;
    for(int i=n-1;i>=1;i--){
        max=0;
        k=0;
        for(int j=i+1;j<=n;j++){
            if(arr[i]<=arr[j]){
                if(f[j]>max){
                    max=f[j];
                    k=j;
                }
            }
        }
        f[i]=max+1;
        p[i]=k;
    }
    for(int i=1;i<=n;i++){
        if(f[i]>res){
            res=f[i];
            start=i;
        }
    }
    cout<<res<<endl<<arr[start];
    start=p[start];
    while(start!=0){
        cout<<"->"<<arr[start];
        start=p[start];
    }
    return 0;
}