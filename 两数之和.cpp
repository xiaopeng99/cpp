#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution{
    public:
    vector<int> twoSum(vector<int>& nums,int target){
        map<int,int> hashtable;
        for(int i=0;i<nums.size();i++){
            if(hashtable.find(target-nums[i])!=hashtable.end()){
                return {hashtable[target-nums[i]],i};
            }else{
                hashtable[nums[i]]=i;
            }
        }
        return {};
    }
};

int main(){
    Solution solution;
    vector<int> position;
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    int target=7;
    position=solution.twoSum(arr,target);
    for(auto i : position){
        cout << i <<endl;
    }
    return 0;
}