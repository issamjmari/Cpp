#include <stdio.h>
#include <cmath>
inline void double_to_fixed(float input)
{
    float data = input * (1 << 8);
    printf("%f\n", data);
    printf("%f\n",  (data / (float) (1 << 8)));
}
int main()
{
    // printf("%f\n", 2.6e9);
    double_to_fixed(10);
}