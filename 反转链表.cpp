#include<iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
};

//迭代
ListNode* reverseList(ListNode* head) {
    ListNode* prev=nullptr;
    ListNode* next;
    ListNode* curr=head;
    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

//递归
ListNode* reverseList1(ListNode* head) {
    if(!head || !head->next){
        return head;
    }
    ListNode* newhead=reverseList1(head->next);
    head->next->next=head;
    head->next=nullptr;
    return newhead;
}

void printList(ListNode* head){
    while (head)
    {
        cout<<head->val;
        head=head->next;
        if(head){
            cout<<"->";
        }
    }
    cout<<endl;
}

int main(){
    //创建链表
    ListNode* head=NULL;
    ListNode* cur=NULL;
    for(int i=1;i<=5;i++){
        ListNode* node=new ListNode;
        node->val=i;
        node->next=NULL;
        if(head==NULL){
            head=node;
            cur=node;
        }else{
            cur->next=node;
            cur=node;
        }
    }
    printList(head);
    //printList(reverseList(head));
    printList(reverseList1(head));
}
