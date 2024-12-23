#include <iostream>

#define N 100

void ThreeXPlusOne(long n, long& c)
{
    if (n <= 1)
    {
        return;
    }
    n = n&1 ? 3*n+1 : n/2;
    return ThreeXPlusOne(n, ++c);
}

int main() 
{
    for (long i = 0; i < N; ++i)
    {
        long count = 0;
        ThreeXPlusOne(i, count);
        std::cout << i << ": " << count << std::endl;
    }
    return 0;
}
