	

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main (void)
{ int a, b, c, d, e, f, g, h, i, n, r, j, t, p, s; /* i первый член последовательности, r разность прогрессии*/

	scanf("%d\n", &a);
	scanf("%d %d %d", &n, &i, &r);

    b=a/1000;  /* первая цифра*/
	c=a%1000;
	d=c/100;   /* вторая цифра*/
	e=c%100;
	f=e/10;    /* третья цифра*/
	g=e%10;    /* четвертая цифра*/
	
	h=b*d*f*g;
	
	j=i+(n-1)*r;             /* н ный член последовательности*/
	t=i+(n-2)*r;          /* н-1 член последовательности*/
	p=i+n*r;                   /* н+1 член последовательности*/
	s=((i+j)*n)/2;  /* сумма н членов последовательности*/
	
	printf("%d\n", h);
	printf("\n");
	printf("%d\n", s);
	printf("%5d%5d%5d\n", n-1, n, n+1);
	printf("%5d%5d%5d\n", t, j, p);
	
    return 0;
}
