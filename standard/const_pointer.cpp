#include <iostream>
using namespace std;

int main(){
    int a = 10;
    // 指向常量的指针
    const int * ptr1 = &a;
    int const * ptr2 = &a;
    // 常指针
    int * const ptr3 = &a;
}