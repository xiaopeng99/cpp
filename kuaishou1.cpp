#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class FreqStack
{
private:
public:
    vector<int> arr;
    unordered_map<int,int> cmp;
    int max,flag;
    FreqStack(/* args */);
    ~FreqStack();
    void push(int val);
    int pop();
};

FreqStack::FreqStack(/* args */)
{
}

FreqStack::~FreqStack()
{
}

void FreqStack::push(int val){
    arr.push_back(val);
    if(cmp.find(val)!=cmp.end()){
        cmp[val]++;
    }else{
        cmp.emplace(val,1);
    }
    max=0;
    flag=0;
    for(int i=0;i<arr.size();i++){
        if(max<=cmp[arr[i]]){
            max=cmp[arr[i]];
            flag=i;
        }
    }
}

int FreqStack::pop(){
    int t=arr[flag];
    int length=arr.size();
    arr.erase(arr.begin()+flag);
    length--;
    cmp[arr[flag]]--;
    for(int i=0;i<length;i++){
        if(max<=cmp[arr[i]]){
            max=cmp[arr[i]];
            flag=i;
        }
    }
    return t;
}

int main(){
    int n;
    FreqStack fs;
    vector<int>ans;
    while(scanf("%d",&n)!=EOF){
        if(n==0){
            if(fs.arr.size()==0){
                ans.push_back(-1);
                break;
            }
            ans.push_back(fs.pop());
        }else{
            fs.push(n);
        }
    }
    if(ans.size()>0){
        for(auto i:ans){
            cout<<i<<endl;
        }
    }
    return 0;
}