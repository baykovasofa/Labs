#include <stdio.h>
#include <limits.h>

void testfunc(int k);
int func(int k, int *y);

int result, error;

int main(void)
{
    int k;
	scanf("%d", &k);
    testfunc(k);
    
    error = func(k, &result);

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
        printf("%3d\t%d\n", n, c); 
    }    
}

int func(int k, int *y)
{
    int err = 0;



    return err;    
}