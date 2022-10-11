#include<iostream>
using namespace std;

#define StackSize  100   //栈大小
#define DataType   int   //栈数据类型
typedef struct Stack{
	DataType array[StackSize];
	int top;
}Stack;

Stack * StackInit(){
	Stack * stack = (Stack*)malloc(sizeof(Stack));
	if(stack == NULL){
        return nullptr;
    }
	stack->top = 0;//初始化栈只需要将size的值设为0就可以了，不用像链表那样麻烦
	return stack;
}

void StackDestroy(Stack* stack){
	stack->top = 0;//销毁栈也同样只需要一步就可以了，将size的值给清零，因为栈使用的是一个静态空间来存储数据，所以没有什么创建内存和释放内存的步骤
}

bool PushStack(Stack * stack){
	DataType data = 0;
	if(stack->top == StackSize-1)
		return false;//栈满不能再压栈
	scanf("%d",data);
	stack->array[stack->top] = data;
	stack->top++;
	return true;//压栈成功
}

bool PopStack(Stack * stack,int  data){
 	if(stack->top == -1){
		return false;
	}	
	stack->top--;
 	data = stack->array[stack->top];
	stack->array[stack->top]=0;
 	return true;
}

bool topStack(Stack * stack,DataType* data){
 	if(stack->top == -1)
 		return false;
 	*data = stack->array[stack->top];
 	return true;
}

int getnum(Stack * stack,int pos){
	int res=stack->array[stack->top];
	stack->top--;
	if(stack->top==pos){
		return res;
	}
}

int StackEmpty(Stack *stack){
 	if(stack->top == -1)
 		return true;
	return false;
}

typedef struct ListNode{
	int val;
	struct ListNode* next;
	ListNode(int x) :
		val(x), next(NULL){
	}
};

ListNode* insertNode(ListNode* head, int data){
	ListNode* newNode = new ListNode(data);
	ListNode* p = head;
	if (p == nullptr){
		head = newNode;
	}
	else{
		while (p->next != nullptr){
			p = p->next;
		}
		p->next = newNode;
	}
	return head;
}

ListNode* deleteNode(ListNode* head, int data){
	ListNode* p = head;
	//首先判断是不是空链表
	if (p == nullptr){
		return head;
	}
	else{
		//判断是不是删除头节点
		if (p->val == data){
			head = p->next;
			delete p;
			return head;
		}
		else{
			//如果有该结点，遍历到待删除节点的前一节点
			while (p->next != nullptr && p->next->val != data){
				p = p->next;
			}
			//遍历完整个链表都没有待删除节点
			if (p->next == nullptr){
				return head;
			}
			else{
				ListNode* deleteNode = p->next;
				p->next = deleteNode->next;
				delete deleteNode;
				return head;
			}
		}
	}
}


typedef struct QNode {
	DataType data; // 数据域
	struct QNode *next; // 指针域
}*QueuePtr;
// 链队列定义
typedef struct {
	QueuePtr front; // 队列的头指针
	QueuePtr rear; // 队列的尾指针
	int length;
}Queue; // 链队列

//新元素 e 入队列，成功返回 true，失败返回 false 
bool EnQueue(Queue &Q, QElemType e)
{
	QNode *p;//先定义一个指向新结点的指针
	p = (QueuePtr)malloc(sizeof(QNode));
	if (!p)exit(OVERFLOW);
	p->data = e;
	p->next = NULL;
	Q.rear->next = p;//只能从队尾进
	Q.rear = p;//改变尾指针
	return true;
}
//出队列，即删除队首元素，并用 e 返回出元素值 ，成功返回 true，失败返回 false 
bool DeQueue(Queue &Q, QElemType &e)
{
	if (Q.front == Q.rear)
		return false;
	QNode *p;//指向被删除元素
	p = Q.front->next;//因为只能从队列前面删除
	e = p->data;
	cout << "出队元素是" << e;
	Q.front->next = p->next;
	if (Q.rear == p)Q.rear = Q.front;//但当队列中最后一个元素被删后，队列尾指针也丢失了，需要将队尾指针指向头结点
	free(p);
	return e;
}

template< typename T>
void BinaryTree<T>::insert(const T &theElement, BinaryNode * &t ) {
    if ( nullptr == t ){
        t = new BinaryNode (theElement);
    } else if ( theElement < t->element ) {
          insert( theElement, t->leftNode );
    } else if ( theElement > t->element ) {
          insert ( theElement, t->rightNode );
    } else {//重复的数据不添加到树中
    }
};

template< typename T>
bool BinaryTree<T>::isFind(const T &theElement, BinaryNode * t ) const {
    if ( nullptr == t ){
        return false;
    } else if ( theElement < t->element ) {
        return isFind( theElement, t->leftNode );
    } else if ( theElement > t->element ) {
         return isFind ( theElement, t->rightNode );
    } else { //匹配
        return true;
    }
};

template< typename T>
void BinaryTree<T>::remove(const T &theElement, BinaryNode * &t ) {
    if( nullptr == t ) {
        return;
    } else {
        if ( theElement < t->element) {
            remove(t->leftNode);
        } else if ( theElement > t->element ) {
            remove (t->rightNode);
        } else if  (nullptr != t->leftNode && nullptr != t->rightNode ) {  //需要删除的节点两个儿子

             t->element = findMin(t->rightNode)->element;
            remove(t->element, t->rightNode);
        } else {
            BinaryNode * oldNode = t;
            t = ( nullptr!= t->leftNode) ? t->leftNode : t->rightNode;
            delete oldNode;
        }
    }
};


int main(){
	int num;
	cin >> num;
	ListNode* head = new ListNode(num);
	ListNode* p = head;
	
	//利用尾插法创建一个链表
	while (cin >> num){
		ListNode* q = new ListNode(num);
		p->next = q; 
		p = p->next;
	}

	//遍历这个链表，并输出每个结点的元素
	ListNode* m = head;
	while (m != nullptr){
		cout << m->val << endl;
		m = m->next;
	}
    return 0;
}



