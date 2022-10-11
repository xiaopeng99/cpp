#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,t,m1,t1,m2,t2,s;
    int on1=1,on2=1,count1=0,count2=0;
    if(m<=0||t<=0||m1<=0||t1<=0||m2<=0||t2<=0){
        return -1;
    }
    for(int i=0;i<t;i++){
        if(on1>0&&on2>0){
            s=s+m1-m2;
        }else if(on1>0 && on2<0){
            s=s+m1;
        }else if(on1<0 && on2>0){
            s=s-m2;
        }
        count1++;
        count2++;
        if(count1==t1){
            on1=-on1;
            count1=0;
        }
        if(count2==t2){
            on2=-on2;
            count2=0;
        }
        if(s>m){
            s=m;
        }
        if(s<0){
            s=0;
        }
    }
    return s;
    return 0;
}