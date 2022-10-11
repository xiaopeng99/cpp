#include<iostream>
#include<vector>
#include<string>

using namespace std;

int f1(string &s1,string & s2){
    if((s1[0]=='B'||s1[0]=='G'||s1[0]=='Y'||s1[0]=='O')&&(s2[0]=='B'||s2[0]=='G'||s2[0]=='Y'||s2[0]=='O')){
        if(s1[0]==s2[0]){
            return 2;
        }
    }
    return 0;
}
int f2(string &s1,string & s2){
    for(int i=1;i<s1.length()-5;i++){
        if(s1[i]!=s2[i]){
            return 0;
        }
    }
    return 3;
}
int f3(string &s1,string & s2){
    int max=0,length=0;
    int k=0;
    char x,y;
    for(int i=s1.length()-5;i<s1.length();i++){
        length=0;
        k=i;
        for(int j=s2.length()-5;j<s2.length();j++){
            x=s1[k];
            y=s2[j];
            if(x!=y){
                length=0;
                continue;
            }
            k++;
            length++;
            if(max<length){
                max=length;
            }
        }
    }
    return max;
}

int main(){
    int n;
    scanf("%d",&n);

    string ss;
    string s1;
    string cs1,cs2;
    int sum=0;
    float sum1=0;
    
    for(int i=0;i<n;i++){
        cin>>cs1>>cs2;
        sum=f1(cs1,cs2)+f2(cs1,cs2)+f3(cs1,cs2);
        sum=sum*1.0/10.0*100.0+0.005;
        sum1=sum1+sum;
    }
    sum1=sum1/(n*1.0);
    printf("%.2f",sum1);
    cout<<'%';
    return 0;
}