#include<iostream>
#include<vector>
using namespace std;



int main(){

    vector<int> path;
    vector<vector<int>> res;
    vector<int> v;
    vector<int> w;
    int n,m,x,y;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back(x);
        w.push_back(y);
    }

    return 0;
}