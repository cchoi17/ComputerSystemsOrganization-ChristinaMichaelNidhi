#include <stdio.h>
#include <assert.h>

void findGCD(long int, long int);

int main()
{
    long int x, y, z, gcd;

    printf("Enter two integers: ");
    scanf("%ld %ld", &x, &y);

    for(z=1; z <= x && z <= y; ++z)
    {
        if(x%z==0 && y%z==0)
            gcd = z;
    }

    findGCD(x, y);
    assert(x != gcd);

    printf("gcd of %ld and %ld is %ld\n", x, y, gcd);

    return 0;
}
