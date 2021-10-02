#include <stdio.h>
#include <math.h>

int main()
{
    double m, n, a;
    scanf("%lf", &m);
    scanf("%lf", &n);
    scanf("%lf", &a);
    if (m >=1 & m <= pow(10, 9) & n >=1 & n <= pow(10, 9) & a >=1 & a <= pow(10, 9))
    {
        long long int result = ceil((m / a)) * ceil((n / a));
        printf("%lld", result);
    }

}