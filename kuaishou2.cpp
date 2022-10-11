#include<iostream>
using namespace std;

int main(){
    int n,a,b,t1,t2,t;
    cin>>n;
    cin>>a>>b>>t;
    for(int i=0;i<n-3;i++){
        cin>>t1;
        if(t1==t){
            continue;
        }
        else if(t1==a){
            a=b;
            b=t;
            t=t1;
        }
        else if(t1==b){
            b=t;
            t=t1;
        }else{
            t=t1;
        }
    }
    if(a<b){
        cout<<a<<" "<<b;
    }else{
        cout<<b<<" "<<a;
    }
    return 0;
}
