#include <iostream>

int main()
{
    int a = 32;
    float b = 0.5f;
    int* p; // int型のポインタ
    std::cout << a;
    p = &a;
    *p = *p + 10;
    std::cout << a;
}
