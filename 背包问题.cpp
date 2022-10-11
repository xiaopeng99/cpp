#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


struct content
{
    int v;
    int w;
    int num;
    double pro;
    bool operator < (const content& content_)const{
        if(pro!=content_.pro) return pro>content_.pro;
        return w<content_.w;
    }
};


int main(){
    int n,m;
    cin>>n>>m;
    vector<content> cc(n);
    for(int i=0;i<n;i++){
        cin>>cc[i].v>>cc[i].w;
        cc[i].num=i+1;
        cc[i].pro=cc[i].v*1.0/(cc[i].w*1.0);
    }
    sort(cc.begin(),cc.end());
    int sum=0;
    for(int i=0;i<n;i++){
        if(m<(sum+cc[i].w)){
            break;
        }
        sum=sum+cc[i].w;
        cout<<"value:"<<cc[i].v<<endl;
        cout<<"weight:"<<cc[i].w<<endl;
    }
    cout<<sum<<endl;
    return 0;
}