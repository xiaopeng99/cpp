#include<iostream>
#include<vector>
using namespace std;
class lengh{
    public:
        int x,y;
};
bool Isappear(int x,vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        if(x==arr[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int n=0,count=0,k=0;
    cin>>n;
    vector<int> appear;
    vector<lengh> len1(n);
    for(int i=0;i<n;i++){
        cin>>len1[i].x>>len1[i].y;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((len1[j].x>=len1[i].x && len1[j].y<=len1[i].y)||(len1[j].x<=len1[i].x && len1[j].y>=len1[i].y)){
                if(!Isappear(j,appear)){
                    appear.push_back(j);
                }
            }
        }
    }
    cout<<n-appear.size();
    return 0;
}