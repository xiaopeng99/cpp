#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

/* struct box1{
    vector<int> w{3,2,1,1,1,1};
    int ha[6]={0};
    int v=10;
};

struct box2{
    vector<int> w{6,2,1};
    int ha[3]={0};
    int v=9;
};

struct box3{
    vector<int> w{5,4};
    int ha[2]={0};
    int v=8;
};

struct box2{
    vector<int> w{9};
    int ha=0;
    int v=7;
}; */

void content(vector<int> &jim,int n,vector<int>&path){
    int sum=0,cc=0,cmax=0,j;
    vector<int> ccc;
    for(int i=n-1;i>=0;i--){
        sort(ccc.begin(),ccc.end());
        cc=accumulate(ccc.begin(),ccc.end(),0);
        if(cmax<ccc[ccc.size()-1]){
            cmax=ccc[ccc.size()-1];
        }
        if(jim[i]>6){
            path[3]=path[3]+1;
            sum=sum+7;
        }else{
            if(jim[i]==6){
                path[1]=path[1]+1;
                sum=sum+9;
                cc=cc+3;
                if(cmax<2){
                    cmax=2;
                }
                ccc.push_back(2);
                ccc.push_back(1);
            }
            if(jim[i]==5){
                path[2]=path[2]+1;
                sum=sum+8;
                cc=cc+4;
                if(cmax<4){
                    cmax=4;
                }
                ccc.push_back(4);
            }
            if(jim[i]<5){
                if(cmax>=jim[i]){
                    for(j=0;j<ccc.size();j++){
                        if(ccc[j]>=jim[i]){
                            break;
                        }
                    }
                    for(j;j<ccc.size();j++){
                        if(j!=ccc.size()-1)
                        {ccc[j]=ccc[j+1];}
                        if(j==ccc.size()-1){
                            ccc.pop_back();
                        }
                    }
                }
                else{
                    if(jim[i]==3){
                        path[0]=path[0]+1;
                        sum=sum+10;
                        cc=cc+6;
                        if(cmax<2){
                            cmax=2;
                        }
                        ccc.push_back(2);
                        ccc.push_back(1);
                        ccc.push_back(1);
                        ccc.push_back(1);
                        ccc.push_back(1);
                    }
                    if(jim[i]==2){
                        path[0]=path[0]+1;
                        sum=sum+10;
                        cc=cc+7;
                        if(cmax<3){
                            cmax=3;
                        }
                        ccc.push_back(3);
                        ccc.push_back(1);
                        ccc.push_back(1);
                        ccc.push_back(1);
                        ccc.push_back(1);
                    }
                    if(jim[i]==1){
                        path[0]=path[0]+1;
                        sum=sum+10;
                        cc=cc+8;
                        if(cmax<3){
                            cmax=3;
                        }
                        ccc.push_back(3);
                        ccc.push_back(2);
                        ccc.push_back(1);
                        ccc.push_back(1);
                        ccc.push_back(1);
                    }
                }
            }
        }
    }
}

int main(){
    vector<int> path(4);
    int n;
    cin>>n;
    vector<int> jim(n);
    for(int i=0;i<n;i++){
        cin>>jim[i];
    }
    sort(jim.begin(),jim.end());
    content(jim,n,path);
    for(auto i:path){
        cout<<i<<" ";
    }
    return 0;
}