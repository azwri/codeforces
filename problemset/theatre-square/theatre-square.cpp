#include <iostream>
#include <cmath>

int main()
{
    double m, n, a, result;
    std::cin >> m >> n >> a;
    if (m <= std::pow(10, 9) & m >= 1 & n <= std::pow(10, 9) & n >= 1 & a <= std::pow(10, 9) & a >= 1)
    {
        result = (std::ceil(m / a)) * (std::ceil(n / a));
        std::cout << (long long int) result;
    }
}