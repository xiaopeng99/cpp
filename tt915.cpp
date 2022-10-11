#include <stdio.h>
using namespace std;
class C{
 int c;
public:
 C(int n):c(n){printf("construct C:%d\n", c);}
 ~C(){}
};
class B{
 int b;
public:
 B(int n):b(n){printf("construct B:%d\n", b);}
 ~B(){}
};
class A {
 C c;
 int a;
 B b;
public:
 A(int n):b(a),a(n),c(a){printf("construct A:%d", a);}
 ~A(){}
};

int main(){
 A a(100);
 return 0;
}