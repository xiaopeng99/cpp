#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isans(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    if(s1==s2){
        for(int i=0;i<s1.length();i++){
            for(int j=i+1;j<s1.length();j++){
                if(s1[i]==s1[j]){
                    return true;
                }
            }
        }
    }
    vector<int> arr;
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            arr.push_back(i);
        }
    }
    if(arr.size()!=2){
        return false;
    }
    if(s1[arr[0]]==s2[arr[1]] && s1[arr[1]]==s2[arr[0]]){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    string s1,s2;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>s1>>s2;
        if(isans(s1,s2)){
            ans[i]=1;
        }else{
            ans[i]=0;
        }
    }
    for(int i=0;i<n;i++){
        if(ans[i]==1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}