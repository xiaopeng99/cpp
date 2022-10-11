#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> ans(4);
    vector<int> muto(10);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        muto[arr[i]]++;
    }
    ans[3]=muto[7]+muto[8]+muto[9];
    muto[7]=0;
    muto[8]=0;
    muto[9]=0;
    int count=0,sum=0;
    for(int i=1;i<7;i++){
        count=count+muto[i];
        sum=sum+i*muto[i];
    }
    while(count>0){
        if(count==1){
            ans[3]++;
            count--;
            break;
        }else{
            if(muto[6]>0){
                ans[1]++;
                muto[6]--;
                count--;
                if(muto[1]>0){
                    muto[1]--;
                    count--;
                }
                if(muto[2]>0){
                    muto[2]--;
                    count--;
                }else if(muto[1]>0){
                    muto[1]--;
                    count--;
                }
            }else{
                if(muto[5]>0){
                    if(count==2){
                        ans[2]++;
                        muto[5]--;
                        count=0;
                    }else{
                       if(muto[4]>0){
                        ans[2]++;
                        muto[5]--;
                        muto[4]--;
                        count=count-2;
                       }else{
                        if(muto[2]+muto[1]<=2){
                            ans[1]++;
                            if(muto[1]>0){
                                muto[1]--;
                                count--;
                            }
                            if(muto[2]>0){
                                muto[2]--;
                                count--;
                            }else if(muto[1]>0){
                                muto[1]--;
                                count--;
                            }
                            for(int i=3;i>0;i--){
                                if(muto[i]>0){
                                    muto[i]--;
                                    count--;
                                    break;
                                }
                            }
                        }else{
                            ans[0]++;
                            if(muto[1]>4){
                                muto[1]=muto[1]-4;
                                count=count-4;
                            }else{
                                muto[1]=0;
                                count=count-muto[1];
                            }
                            if(muto[2]>0){
                                muto[2]--;
                                count--;
                            }else if(muto[1]>0){
                                muto[1]--;
                                count--;
                            }
                            for(int i=3;i>0;i--){
                                if(muto[i]>0){
                                    muto[i]--;
                                    count--;
                                    break;
                                }
                            }
                        }
                       } 
                    }
                }else if(muto[4]>0){
                    if(count==2){
                        ans[2]++;
                        count=0;
                    }else{
                        
                    }
                }
            }
        }
    }
    return 0;
}