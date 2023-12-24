#include <iostream>
using namespace std;

/*
程序输出结果：
constructing A
destructing B
destructing A
*/
class A {
public:
    A() { cout << "constructing A" << endl; }
    ~A() { cout << "destructing A" << endl; }
};

class B : public A {
public:
    ~B() { cout << "destructing B" << endl; }
};

int main(){
    B b;
    return 0;
}




