#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<deque>
#include<list>
#include<algorithm>
using namespace std;

vector<int> advantageCount(vector<int> arr1,vector<int> arr2){
    vector<int>arr2sort(arr2);
    sort(arr2sort.begin(),arr2sort.end());
    sort(arr1.begin(),arr1.end());

    map<int,deque<int>> bMap;
    for(auto b : arr2){
        bMap.emplace(b,list<int>());
    }
    deque<int> aq;
    int j=0;
    for(int a : arr1){
        if(a > arr2sort[j]){
            bMap.at(arr2sort[j++]).emplace_back(a);
        }else{
            aq.emplace_back(a);
        }
    }
    vector<int> ans(arr1.size());
    for(int i=0;i<arr2.size();i++){
        if(bMap.at(arr2[i]).size()>0){
            ans[i]=bMap.at(arr2[i]).back();
            bMap.at(arr2[i]).pop_back();
        }else{
            ans[i] = aq.back();
            aq.pop_back();
        }
        return ans;
    }
}

int main(){

    vector<int> arr1={10,24,8,32};
    vector<int> arr2={13,25,25,11};
    vector<int> ans(advantageCount(arr1,arr2));
    for(int a : ans){
        cout<<a<<" ";
    }
    return 0;
}