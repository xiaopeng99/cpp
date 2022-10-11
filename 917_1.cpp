#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    vector<int8_t> vec;
    int8_t t;
    priority_queue<int,vector<int>,greater<int>> pq;
    int ans;
    for(int i=0;i<6;i++){
        cin>>t;
        vec.push_back(t);
    }
    for(int i=1;i<vec.size();i++){
        if(vec[i-1]|vec[i]!=255) ans++;
        break;
    }
    cout<<ans;
    return 0;
}