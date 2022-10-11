#include<iostream>
#include<string>
#include<queue>
using namespace std;

static string predictPartyVictory(string s){
    queue<int> r;
    queue<int> d;
    int length=s.length();
    for(int i=0;i<length;i++){
        if(s[i]=='R'){
            r.emplace(i);
        }else{
            d.emplace(i);
        }
    }
    while (!r.empty() && !d.empty())
    {
        int rPoll=r.front(),dPoll=d.front();
        r.pop();
        d.pop();
        if(rPoll<dPoll){
            r.emplace(rPoll+length);
        }else{
            d.emplace(dPoll+length);
        }
    }
    return d.empty() ? "R" : "D";
}

int main(){
    cout<<predictPartyVictory("RRD");
    return 0;
}