#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main(){
    vector<int> path;
    accumulate(path.begin(),path.end(),0);
    return 0;
}