#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

struct jineng
{
    int tm,dmg;
    bool operator<(jineng x){
        if(dmg==x.dmg){
            if(tm<x.tm){
                return false;
            }else{
                return true;
            }
        }
        else if(dmg<x.dmg){
            return true;
        }else{
            return false;
        }
    }  
};

int damege(int t,int s,vector<jineng>& arr){
    sort(arr.begin(),arr.end());
    int n=arr.size();
    vector<int> st(s);
    int sum=0;
    for(int i=0;i<t;i++){
        for(int j=s-1;j>=0;j--)
        {
            if(i>=st[j]){
                st[j]=i+arr[j].tm;
                sum=sum+arr[j].dmg;
                break;
            }
        }
    }
    return sum;
}

int main(){
    int n,t,s;
    cin>>n;
    vector<int>res(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>t>>s;
        sum=0;
        vector<jineng> arr(s);
        for(int j=0;j<s;j++){
            cin>>arr[j].dmg>>arr[j].tm;
        }
        sum=damege(t,s,arr);
        res[i]=sum;
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<endl;
    }
    return 0;
}