#include <iostream>
#include "swap.h"
#include "struct_.h"
using namespace std;

/*内联函数：
如果函数只有一两条语句，那么大部分的时间都会花费在函数调用机制上，这种时间开销就就不容忽视。
为了消除函数调用的时空开销，C++ 提供一种提高效率的方法，即在编译时将函数调用处用函数体替换，类似于C语言
中的宏展开。这种在函数调用处直接嵌入函数体的函数称为内联函数（Inline Function），又称内嵌函数或者内置函数。
*/
//函数声明
inline double CalArea(double radius) {return 3.14 * radius * radius;}; //最后的分号加不加都行

int main() {
    //struct_();
    double r(3.0);
    double area;
    area = CalArea(r);
    cout << area << endl;
    return 0;
}
