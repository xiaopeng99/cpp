#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res1=0,res2=0;
    for(int i=0;i<n;i++){
        switch (arr[i])
        {
        case 1:
            res1++;
            break;
        case 2:
            res2++;
            break;
        case 3:
            if(res1==res2){
                res1++;
                res2++;
            }else if(res1>res2){
                res1++;
            }else{
                res2++;
            }
            break;
        case 4:
            break;
        default:
            break;
        }
    }
    cout<<res1<<" "<<res2<<endl;
    return 0;
}