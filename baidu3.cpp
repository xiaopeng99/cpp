#include<iostream>
#include<vector>
#include<string>
using namespace std;

long long sum=0;

vector<int> distringmatch(string s){
    int n=s.length();
    ....

    return res;
}

int main(){
    string s;
    getline(cin,s);
    vector<int> res(distringmatch(s));
    //输出res就好了
    for(auto i:res){
        cout<<i<<" ";
    }
}