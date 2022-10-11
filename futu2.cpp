#include<iostream>

using namespace std;

int ss(int x,int y,int a,int b){
    int count=0;
    while(1){
        if(a==b){
            return count;
        }
        if(a<b){
            while(a<b){
                a=a*x;
                count++;
                if(a==b){
                    return count;
                }
            }
        }
        if(a>b){
            while(a>b){
                a=a/y;
                count++;
                if(a==b){
                    return count;
                }
            }
            if(a<b){
                return -1;
            }
        }
    }
    return count;
}

int main(){
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    cout<<ss(x,y,a,b); 
    return 0;
}