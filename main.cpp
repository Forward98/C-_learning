#include <iostream>
#include "swap.h"
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    cout << a << " " << b << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    
    return 0;
}