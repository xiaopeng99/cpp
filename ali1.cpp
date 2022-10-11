#include<iostream>
#include<string>
#include<vector>
#include<numeric>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    vector<char>ans;
    vector<vector<char>> res;
    vector<int> cou(3);
    vector<vector<int>> cm;
    int x,y,z;
    for(int i=0;i<n;i++){
        x=0,y=0,z=0;
        cin>>s;
        ans.clear();
        for(int j=0;j<s.length();j++){
            if(s[j]=='A'){
                ans.push_back('A');
                x++;
            }else if(s[j]=='L'){
                ans.push_back('L');
                y++;
            }else if(s[j]=='I'){
                ans.push_back('I');
                z++;
            }
        }
        cou[0]=x;
        cou[1]=y;
        cou[2]=z;
        cm.push_back(cou);
        res.push_back(ans);
    }
    for(int i=0;i<n;i++){
        if(res[i].size()==0){
            cout<<-1;
        }else{
            x=cm[i][0];
            y=cm[i][1];
            z=cm[i][2];
            while(x+y+z>0){
                if(x>0){
                    cout<<'A';
                    x--;
                }
                if(y>0){
                    cout<<'L';
                    y--;
                }
                if(z>0){
                    cout<<'I';
                    z--;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}