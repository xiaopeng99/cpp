#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n1,n2,n3,n4,x;
    cin>>n1>>n2>>n3>>n4>>x;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    vector<int> arr3(n3);
    vector<int> arr4(n4);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n3;i++){
        cin>>arr3[i];
    }
    for(int i=0;i<n4;i++){
        cin>>arr4[i];
    }
    int a=0,b=0,c=0,d=0,count=0;
    while(a<n1 && b<n2 && c<n3 && d<n4){
        if(arr1[a]<x){
            a++;
            continue;
        }
        if(arr2[b]<x){
            b++;
            continue;
        }
        if(arr3[c]<x){
            c++;
            continue;
        }
        if(arr4[d]<x){
            d++;
            continue;
        }
        a++;
        b++;
        c++;
        d++;
        count++;
    }
    cout<<count;
    return 0;
}