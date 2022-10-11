#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    vector<string> s1(n1);
    vector<string> s2(n2);
    vector<string> s3(n3);
    for(int i=0;i<n1;i++){
        cin>>s1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>s2[i];
    }
    for(int i=0;i<n3;i++){
        cin>>s3[i];
    }
    int m;
    cin>>m;
    vector<string> s4(m);
    
    return 0;
}