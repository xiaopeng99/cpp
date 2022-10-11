#include<iostream>
#include<string>
using namespace std;

bool IsinStr(char a,string s){
    for(int i=0;i<s.length();i++){
        if(a==s[i]){
            return true;
        }
    }
    return false;
}

int main(){
    string s1;
    string s2;
    int a;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s2.length();i++){
        if(!IsinStr(s2[i],s1)){
            cout<<s2[i];
        }
    }
    return 0;
}