#include <iostream>
struct V3 {
    float x, y, z;
};

int main()
{
    V3 a[] = { {1,2,3},{4,5,6},{7,8,9}};   //メモリ上で連続領域になる
    V3* p1; // int型のポインタ
    V3* p2; // int型のポインタ
    p1 = &a[0];
    p2 = p1 + 1;    //int型一つ分後ろにずらす
    p1->x = p1->x + p2->y;
    std::cout << a[0].x;
}