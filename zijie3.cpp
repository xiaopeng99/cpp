#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int f3(vector<long long> &arr,int k){
    int length=1,sum=0,x=0,y=0,t;
    for(int i=0;i<arr.size();i++){
        x=0;
        y=1;
        t=i;
        length=1;
        for(int j=i+1;j<arr.size();j++){
            if(pow(2,x)*arr[t]<pow(2,y)*arr[j]){
                length++;
                x++;
                y++;
                t++;
            }
            if(length==(k+1)){
                sum++;
                break;
            }
            if(pow(2,x)*arr[t]>=pow(2,y)*arr[j]){
                break;
            }
        }
    }
    return sum;
}

int main(){
    int n,m,k;
    cin>>n;
    vector<int> res;
    for(int i=0;i<n;i++){
        cin>>m>>k;
        vector<long long> arr(m);
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        res.push_back(f3(arr,k));
    }
    for(auto i:res){
        cout<<i<<endl;
    }
}