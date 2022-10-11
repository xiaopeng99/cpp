#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,m;
    cin>>n;
    vector<int> v;
    vector<vector<int>> num;
    for(int i=0;i<n;i++){
        v.clear();
        for(int j=0;j<=i;j++){
            cin>>m;
            v.push_back(m);
        }
        num.push_back(v);
    }
    vector<vector<int>> res(num);
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            res[i][j]=num[i][j]+max(res[i+1][j],res[i+1][j+1]);
        }
    }
    cout<<res[0][0];
    return 0;
}