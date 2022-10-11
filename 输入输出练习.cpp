#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<numeric>
#include<algorithm>
using namespace std;
int  main(){
    /* int a,b;
    vector<int> ans;
    while(scanf("%d %d",&a,&b)!=EOF){
        ans.push_back(a+b);
    }
    for(auto i:ans){
        cout<<i<<endl;
    } */

    /* int t,a,b;
    cin>>t;
    vector<int>ans;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        ans.push_back(a+b);
    }
    for(auto i:ans){
        cout<<i<<endl;
    } */

    /* int a,b;
    vector<int> ans;
    while(1){
        scanf("%d %d",&a,&b);
        if(a==0&&b==0){
            break;
        }
        ans.push_back(a+b);
    }
    for(auto i:ans){
        cout<<i<<endl;
    } */

    /* int n,a,sum;
    vector<int> ans;
    while(1){
        sum=0;
        cin>>n;
        if(n==0){
            break;
        }
        for(int i=0;i<n;i++){
            cin>>a;
            sum+=a;
        }
        ans.push_back(sum);
    }
    for(auto i:ans){
        cout<<i<<endl;
    } */
    /* int t,n,sum,a;
    vector<int>ans;
    cin>>t;
    for(int i=0;i<t;i++){
        sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            sum+=a;
        }
        ans.push_back(sum);
    }
    for(auto i:ans){
        cout<<i<<endl;
    } */

    /* string str;
    int num;
    vector<int> v;
    vector<int> ans;
    vector<vector<int>> nums;
    while(getline(cin,str)){
        istringstream iss(str);
        v.clear();
        while(iss>>num){
            v.push_back(num);
        }
        nums.push_back(v);
    }
    for(auto i:nums){
        cout<<accumulate(i.begin(),i.end(),0)<<endl;
    } */

    /* int n;
    cin>>n;
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    sort(str.begin(),str.end());
    for(auto i:str){
        cout<<i<<" ";
    } */
    string str;
    string num;
    vector<string> v;
    vector<vector<string>> nums;
    while(getline(cin,str)){
        
        istringstream iss(str);
        
        v.clear();
        while(getline(iss,num,',')){
            v.push_back(num);
        }
        nums.push_back(v);
    }
    for(auto i:nums){
        sort(i.begin(),i.end());
        cout<<i[0];
        for(int j=1;j<i.size();j++){
            cout<<','<<i[j];
        }
    }
    return 0;
}