#include <stdio.h>
#include <cmath>
inline int double_to_fixed(double input)
{
    printf("%f\n", round(input * (1 << 8)));
}
int main()
{
    double_to_fixed(1234.4321)
}