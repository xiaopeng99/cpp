#include<iostream>
#include<vector>

using namespace std;

int f1(vector<int> arr,int low,int high,int target){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}