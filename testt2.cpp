#include<iostream>
#include<math.h>

using namespace std;

int maxnum(int x,int y){
    int max=1;
    for(int i=2;i<x;i++){
        if((x%i==0)&&(y%i==0)){
            if(max<i){
                max=i;
            }
        }
    }
    return max;
}

int main(){
    int x=0,count=0,mon=1,son=1,max=1,count1=0,son1=1,mon1=1,max1=1;
    cin>>x;
    if(x>3){
        count=(int)(sqrt(x)+0.5);
        if(x%count==0){
            for(int i=0;i<count;i++){
                son=son*(x/count);
            }
        }else{
            for(int i=0;i<count;i++){
                son=son*x;
                mon=mon*count;
            }
            max=maxnum(mon,son);
        }
        count1=count+1;
        if(x%count1==0){
            for(int i=0;i<count1;i++){
                son1=son1*(x/count1);
            }
        }else{
            for(int i=0;i<count1;i++){
                son1=son1*x;
                mon1=mon1*count1;
            }
            max1=maxnum(mon1,son1);
        }
        if((son*mon1)>(son1*mon)){
            if(mon==1){
                cout<<son<<" "<<mon;
            }else{
                cout<<son/max<<" "<<mon/max;
            }
        }else{
            if(mon==1){
                cout<<son1<<" "<<mon1;
            }else{
                cout<<son1/max1<<" "<<mon1/max1;
            }
        }
    }else{
        if(x==1){
            cout<<1<<" "<<1;
        }else if(x==2){
            cout<<2<<" "<<1;
        }else{
            cout<<3<<" "<<1;
        }
    }
    return 0;
}