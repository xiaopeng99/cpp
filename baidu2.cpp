#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> part1;
    vector<int> part2;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            part1.push_back(arr[i]);
        }else{
            part2.push_back(arr[i]);
        }
    }
    int len1=part1.size(),len2=part2.size();
    int length=min(len1,len2);
    cout<<len1/2<<endl;
    int j=0;
    for(int i=0;i<length;i++){
        cout<<part1[i]<<" "<<part2[i]<<endl;
        j++;
    }
    if(len1%2==1){
        len1--;
    }
    for(j;j<len1;j=j+2){
        cout<<part1[j]<<part1[j+1];
    }
    return 0;
}