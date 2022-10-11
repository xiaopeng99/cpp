#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> diStringMatch(string s) {
        int n = s.length(), lo = 0, hi = n;
        vector<int> perm(n + 1);
        for (int i = 0; i < n; ++i) {
            perm[i] = s[i] == 'I' ? lo++ : hi--;
        }
        perm[n] = lo; // 最后剩下一个数，此时 lo == hi
        return perm;
    }


int main(){
    string s;
    getline(cin,s);
    vector<int> res(diStringMatch(s));
    for(auto i:res){
        cout<<i<<" "<<endl;
    }
    return 0;
}