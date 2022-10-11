#include<iostream>
#include<vector>
#include<string>


using namespace std;

int main(){
    vector<int> a;
    string str;
    char n;
    int sum=0,count1=0,count2=0,min=10000,sum1=0,sum2=0;
    while(cin>>n){
        if(n==','){
            continue;
        }
        else if(n=='\n'){
            break;
        }else{
            a.push_back(n-'0');
        }
    }
    vector<int> b(a.size());
    while(cin>>n){
        if(n==','){
            continue;
        }
        else if(n=='\n'){
            break;
        }else{
            b.push_back(n-'0');
        }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    for(int i=0;i<a.size();i++){
        if(count2<3){
            if(min>b[i]){
                min=b[i];
            }
        }
        if(count2==3){
            min=10000;
        }
        sum1=sum+a[i];
        count1++;
        if(count1>=3){
            sum1=sum1*0.6;
        }
        sum2=sum+b[i];
        count2=count2%3;
        count2++;
        if(count2>=3){
            sum2=sum2-min;
        }
        if(sum1<=sum2){
            sum=sum1;
            count2--;
        }else{
            sum=sum2;
            count1--;
        }
    }
    cout<<sum;
    return 0;
}