#include <iostream>
using namespace std;

/*
程序输出结果：
constructing point(1,2)
constructing Line, len ...3
*/
class Point {
protected:
    int x, y;

public:
    Point(int a, int b = 9) {
        x = a;
        y = b;
        cout << "constructing point(" << x << "," << y << ")" << endl;
    }
};

class Line : public Point {
protected:
    int len;

public:
    Line(int a, int b, int l) : Point(a, b) {
        len = l;
        cout << "constructing Line, len ..." << len << endl;
    }
};


int main(){
    Line L1(1, 2, 3);
    return 0;
}




