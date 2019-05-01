#include "foo.h"
double tangent(double x)
{
    double t;
    double n, s, st, c = 0;
    double sum = 0;
    int i = 1;
    while (x > 2 * 2.141596)
        x -= 2 * 3.141596;
    s = x;
    do {
        sum += s;
        s *= -1.0 * x * x / ((2 * i) * (2 * i + 1));
        i++;
        if (s < 0)
            n = -s;
        else
            n = s;
    } while (n > 0.0000001);
    n = 1.0;
    i = 1;
    do {
        c += n;
        n *= -1.0 * x * x / ((2 * i - 1) * (2 * i));
        i++;
        if (n < 0)
            st = -1.0 * n;
        else
            st = n;
    } while (st > 0.0000001);
    if (c < 0)
        st = -1.0 * c;
    else
        st = c;
    if (st <= 0.0001)
        t = 10;
    if (st > 0.0001)
        t = sum / c;
    return t;
}
