#include <stdio.h>
#include <limits.h>

void testfunc(int k);
int func(int k, int *err);


int main(void)
{
    int k, result, error = 0;
	scanf("%d", &k);
    testfunc(k);
    
    result = func(k, &error);

    if (error == 0)
        printf("%d\n", result);
    else
        printf("!\n");

    return 0;
}

void testfunc(int k)
{
    int a = 1, b = 1, c;
    for (int n = 1; n <= k; n++)        
    {
        c = b;
        b = a;
        a = b + 2 * c;
        if (c < 0)
            break;
        printf("testfunc: %3d\t%d\n", n, c); 
    }    
}

int func(int k, int *err)
{
    int f1, f2;
    if (k <= 2)
        return 1;

    f1 = func(k - 1, err);
    f2 = func(k - 2, err);

    if (INT_MAX - f1 < 2 * f2)
    {
        *err = 1;
        return 1;
    } 
    else
        return f1 + 2 * f2;
}