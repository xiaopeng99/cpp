#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a=1,b=1,c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    if(n<2){
        cout<<1;
    }else{
        cout<<c;
    }
    return 0;
}