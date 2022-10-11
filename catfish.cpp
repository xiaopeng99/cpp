#include<iostream>
using namespace std;
struct queue
{
    int head;
    int tail;
    int data[1000];
};
struct stack
{
    int data[1000];
    int top;
};
int main(){
    queue q1,q2;
    stack s;
    int i,t,book[10];

    //初始化队列、栈、数组
    q1.head=q1.tail=1;
    q2.head=q2.tail=1;
    s.top=1;
    for(i=1;i<10;i++){
        book[i]=0;
    }
    //输入牌组
    for(i=1;i<=6;i++){
        cin>>q1.data[q1.tail];
        q1.tail++;
    }
    for(i=1;i<=6;i++){
        cin>>q2.data[q2.tail];
        q2.tail++;
    }
    //出牌
    while(q1.head<q1.tail && q2.head<q2.tail){
        t=q1.data[q1.head];
        if(book[t]==0){
            q1.head++;
            s.data[s.top]=t;
            s.top++;
            book[t]=1;
        }else{
            q1.head++;
            q1.data[q1.tail]=t;
            q1.tail++;
            while (s.data[--s.top]!=t)
            {
                book[s.data[s.top]]=0;
                q1.data[q1.tail]=s.data[s.top];
                q1.tail++;
            }
            book[s.data[s.top]]=0;
            q1.data[q1.tail]=s.data[s.top];
            q1.tail++;
        }
        if(q1.head == q1.tail) break;

        t=q2.data[q2.head];
        if(book[t]==0){
            q2.head++;
            s.data[s.top]=t;
            s.top++;
            book[t]=1;
        }else{
            q2.head++;
            q2.data[q2.tail]=t;
            q2.tail++;
            while (s.data[--s.top]!=t)
            {
                book[s.data[s.top]]=0;
                q2.data[q2.tail]=s.data[s.top];
                q2.tail++;
            }
            book[s.data[s.top]]=0;
            q2.data[q2.tail]=s.data[s.top];
            q2.tail++;
        }
    }
    if(q2.head == q2.tail){
        cout<<"A WIN"<<endl;
        cout<<"A手中的牌是";
        for(i=q1.head;i<q1.tail;i++){
            cout<<" "<<q1.data[i];
        }
        cout<<endl;
        if(s.top>1){
            cout<<"此时桌子上的牌为：";
            for(i=1;i<s.top;i++){
                cout<<" "<<s.data[i];
            }
            cout<<endl;
        }else{
            cout<<"桌子上已经没有牌了"<<endl;
        }
    }else{
        cout<<"B WIN"<<endl;
        cout<<"B手中的牌是";
        for(i=q2.head;i<q2.tail;i++){
            cout<<" "<<q2.data[i];
        }
        cout<<endl;
        if(s.top>1){
            cout<<"此时桌子上的牌为：";
            for(i=1;i<s.top;i++){
                cout<<" "<<s.data[i];
            }
            cout<<endl;
        }else{
            cout<<"桌子上已经没有牌了"<<endl;
        }
    }
    return 0;
}

