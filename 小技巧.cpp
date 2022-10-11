#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<sstream>
#include<cstring>
using namespace std;

const int INF=0x3f3f3f3f;//通常用来代替最大值

struct node
{
    int a,b;
    bool operator < (const node& node_)const{
        if(a!=node_.a) return a<node_.a;
        return b<node_.b;
    }
};


int main(){
    char c=0;
    int num=100;
    string str=to_string(num);//整型转字符串
    cout<<str<<endl;
    int number=stoi(str);//字符串转为整型，stol()是字符串转为长整型
    cout<<number<<endl;
    vector<int> nums{1,2,34,44,99};
    int k=lower_bound(nums.begin(),nums.end(),56)-nums.begin();//第一个大于等于目标值的迭代器位置
    cout<<k<<endl;
    k=upper_bound(nums.begin(),nums.end(),56)-nums.begin();//找到第一个大于目标值的迭代器位置
    cout<<k<<endl;
    string s="ABcd";
    //transform(s.begin(),s.end(),s.begin(),::tolower(1));
    isdigit(c);//判断c字母是不是数字
    isalpha(c);//判断c字母是不是字母
    isalnum(c);//判断c字母是不是字母或者数字
    tolower(c);//转为小写
    toupper(c);//转为大写
    priority_queue<int> pq;//默认大根堆
    priority_queue<int,vector<int>,greater<int>> pq1;//小根堆
    int arr[5]={1,2,3,4,5};
    memset(arr,0,sizeof(arr));//此函数按字节初始化
    unordered_map<int,int> mp;//哈希表 内部是无序的
    unordered_set<int> st;//无序集合
    string ss="hello world my name is da peng";
    stringstream sss(ss);
    string ss1;
    int cnt=0;
    while(sss>>ss1){
        cnt++;
        cout<<ss1<<endl;
    }
    cout<<cnt<<endl;
    char s2[10];
    double n1=22.23434;
    sprintf(s2,"%.2f",n1);
    string s3=s2;
    cout<<s3<<endl;
    string s4="12:59:36";
    char s5[100];
    memcpy(s5,s4.c_str(),strlen(s4.c_str()));
    int u,v,w;
    sscanf(s5,"%d:%d:%d",&u,&v,&w);
    cout<<u<<" "<<v<<" "<<w<<endl;
     vector<node> tt;
    tt.push_back({1,1});
    tt.push_back({2,3});
    sort(tt.begin(),tt.end());
    for(auto &node: tt){
        cout<<node.a<<" "<<node.b<<endl;
    }
    priority_queue<node> pq2;
    pq2.push({1,5});
    pq2.push({2,3});
    pq2.push({2,5});
    while(!pq2.empty()){
        cout<<pq2.top().a<<" "<<pq2.top().b<<endl;
        pq2.pop();
    }
    return 0;
}