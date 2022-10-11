#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int fib1(int n){
    if(n<1){
        return -1;
    }else if(n==1 || n==2){
        return 1;
    }else{
        return fib1(n-1)+fib1(n-2);
    }
}

int fib2(int n){
    int f1=1,f2=1,f3=0;
    if(n<3){
        return 1;
    }else{
        for(int i=2;i<n;i++){
            f3=f1+f2;
            f1=f2;
            f2=f3;
        }
    }
    return f3;
}

int main(){
    cout<<fib2(4);
    return 0;
}