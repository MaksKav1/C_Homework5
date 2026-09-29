#include <stdio.h>
#include <math.h>

int main()
{
    double x = 1.825e2;
    double y = 18.225;
    double z = -3.298e-2;
    double psi;

    psi = fabs(pow(x, y / x) - cbrt(y / x))
        + (y - x) * (cos(y) - z / (y - x))
        / (1 + pow(y - x, 2));

    printf("psi = %.4f\n", psi);

    return 0;
}
