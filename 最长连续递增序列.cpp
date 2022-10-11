#include<iostream>
#include<vector>
using namespace std;

int findlength(vector<int> arr){
    int start=0;
    int max=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]<=arr[i-1]){
            start=i;
        }
        max=max>(i-start+1)?max:(i-start+1);
    }
    return max;
}

int main(){
    vector<int> arr={1,2,3,2,3,4,3,4,5,6,7};
    cout<<findlength(arr)<<endl;
    return 0;
}