#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct Meet
{ 
    int beg; //会议的开始时间
    int end; //会议的结束时间
    int num; //记录会议的编号
}meet[10005]; //会议的最大个数为1000
class setMeet{
    int n,ans; // n:会议总数 ans: 最大的安排会议总数
    public:
    void init();
    void solve();
};

bool cmp(Meet x,Meet y) { 
    if (x.end == y.end)
        return x.beg > y.beg;
    return x.end < y.end;
}
void setMeet::init()
{  
    int s,e,i;
    cin >> n;
    for(i=0;i<n;++i){ 
        cin>>s>>e;
        meet[i].beg=s; 
        meet[i].end=e; 
        meet[i].num=i+1; 
    }
}
void setMeet::solve(){ 
    sort(meet,meet+n,cmp); //对会议按结束时间排序
    int i; 
    ans=1;
    int last = meet[0].end; //记录刚刚被选中会议的结束时间
    for( i = 1;i < n;++i){ 
        if(meet[i].beg>=last){ //如果会议i开始时间大于等于最后一个选中的会议的结束时间
            ans++; last = meet[i].end; 
        }
    }
    cout <<ans<<endl;
}
int main()
{
    setMeet sm;
    sm.init();//读入数据
    sm.solve();//贪心算法求解
    return 0;
}
