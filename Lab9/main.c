#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

int From6to10(long int x, long int *y)
{
    long int t, k;
    int i = 0;

    while (x != 0)
    {
        t = x % 10;
        k = t * pow(6, i);

        if (labs(*y + k) > INT_MAX) return 1;

        *y += k;
        x /= 10;
        i++;        
    }

    return 0;
}

int From10to6(long int x, long int *y)
{
    long int t, k;
    int i = 0;

    while (x != 0)
    {
        t = x % 6;
        k = t * pow(10, i);
        
        if (labs(*y + k) > INT_MAX) return 1;

        *y += k;
        x /= 6;
        i++;        
    }

    return 0;
}

int main(void)
{ 
    long int Value6in, Value10in, Value6out = 0, Value10out = 0;
    int RetCode;

    scanf("%ld", &Value6in);
    scanf("%ld", &Value10in);

    RetCode = From6to10(Value6in, &Value10out);

    if (RetCode == 0)
        printf("%ld\n", Value10out);
    else
        printf("!\n");

    RetCode = From10to6(Value10in, &Value6out);

    if (RetCode == 0)
        printf("%ld\n", Value6out);
    else
        printf("!\n");

    return 0;
}
