#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
using namespace std;



int main(){
    int n,m;
    cin>>n;
    string s;
    vector<string> ss;
    for(int i=0;i<n;i++){
        while(cin>>s){
            if(s=="\n"){
                break;
            }else if(s==" "){
                continue;
            }else{
                ss.push_back(s);
            }
        }
    }
    cin>>m;
    sort(ss.begin(),ss.end());
    cout<<ss[0];
    for(int i=0;i<ss.size()-1;i++){
        if(ss[i]==ss[i+1]){
            ss.erase(ss.begin()+i);
            i--;
        }
    }
    int t=1,flag=0;
    for(int i=1;i<ss.size();i++){
        if(ss[i][0]!=ss[i-1][0]){
            t++;
        }
        if(t==m){
            flag=i;
            break;
        }
    }
    int sum=1;
    for(int i=flag;i<ss.size();i++){
        if()
    }
    return 0;
}