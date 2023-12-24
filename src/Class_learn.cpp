#include <iostream>
using namespace std;
/*
先构造成员
再构造自身（调用构造函数）
析构则是构造的逆序
每次调用析构函数时总是析构最近被构造的、且没有被析构的对象。
也就是：先被构造的对象后被析构，析构顺序恰与构造顺序相反
/*
执行结果：
Constructing B
Constructing A
Constructing C
Destructing C
Destructing A
Destructing B
*/


class A{
public:
    A() {cout << "constrcuting A" << endl;}
    ~A() {cout << "Destrcuting A" << endl;}
};

class B{
public:
    B() {cout << "constrcuting B" << endl;}
    ~B() {cout << "Destrcuting B" << endl;}
};

class C{
public:
    C() {cout << "constrcuting C" << endl;}
    ~C() {cout << "Destrcuting C" << endl;}
    B b;
    A a;
};

int main() {
    C c;
    return 0;
}
