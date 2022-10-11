#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>


using namespace std;

int main(){
    vector<int> a;
    vector<int> b;
    vector<int> v;
    vector<vector<int>> nums;
    string str;
    string n;
    int sum=0,count1=0,count2=0,min=10000,sum1=0,sum2=0;
    while(getline(cin,str)){
        istringstream iss(str);
        v.clear();
        while(getline(iss,n,',')){
            v.push_back(stoi(n));
        }
        nums.push_back(v);
    }
    for(int i=0;i<nums[0].size();i++){
        a[i]=nums[0][i];
    }
    for(int i=0;i<nums[1].size();i++){
        b[i]=nums[1][i];
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