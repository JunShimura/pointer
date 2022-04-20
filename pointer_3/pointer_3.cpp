#include <iostream>

float Sum(float d1, float d2, float d3, float d4) {
    float s = d1 + d2 + d3 + d4;
    return s;
}

void AverageSum(float d1, float d2, float d3, float d4, float* a, float* s) {
    *s = Sum(d1, d2, d3, d4);
    *a = *s / 4;
}
int main()
{
    float data[] = { 2,3,-1.8f,50 };
    float sum;
    float average;
    AverageSum(data[0], data[1], data[2], data[3], &average, &sum);
    std::cout << "合計="<<sum<<"平均="<<average;
}
