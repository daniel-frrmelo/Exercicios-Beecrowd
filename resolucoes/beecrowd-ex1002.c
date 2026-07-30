// Problema n°1002 do beecrowd

#include <stdio.h>

int main()
{
    double r, area;
    const double pi = 3.14159;

    scanf("%lf", &r);
    area = pi * (r * r);
    printf("A=%.4f\n", area);

    return 0;
}