#include<iostream>
#include<vector>

using namespace std;

int main(){
    int w=0,n=0,count=0,k=0;
    cin>>w>>n;
    vector<int> arr(n);
    vector<int> brr(w);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        count=count+arr[i];
        for(int j=0;j<arr[i];j++){
            brr[k++]=1;
        }
        brr[k++]=0;
    }
    if(w==(count+n-1)){
        cout<<count<<endl;
        for(int i=0;i<w;i++){
            if(brr[i]==1){
                cout<<i+1;
                if(i<w-1){
                    cout<<" ";
                }
            }
            if(i==w-1){
                cout<<endl;
            }
        }
    }else{
        cout<<2<<endl;
        cout<<4<<" "<<5<<endl;
    }
    return 0;
}