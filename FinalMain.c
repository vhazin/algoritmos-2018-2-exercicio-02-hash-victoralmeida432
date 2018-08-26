#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    long long i, r, cont = 0;
    scanf("%lld", &i);
    long long a, b, x, n, c, d, m, parcial = 0;
    while (i--)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &x, &n, &c, &d, &m);
        parcial = a * x + b;
        r = parcial % m;
        if (r >= c && r <= d)
            cont++;
        while (n--)
        {
            parcial = parcial + a;
            if (parcial < m)
                r = r + a;
            else
                r = parcial % m;
            if (r >= c && r <= d)
                cont++;
        }
        printf("%lld\n", cont);
        cont = 0;
    }
    return 0;
}
