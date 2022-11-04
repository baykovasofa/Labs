/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/


/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <math.h>
int main (void)
{
double  sum, del, m, a, c;
int i, n;
scanf("%d", &n);
 a=0.5;
for( i=1; i<=n; i++)
 {
	m=(2*i-1)*(2*i+1);
	c=1/m;
    sum=sum+c;
   
 }
del=a-sum;

printf("%.8lf\n", a);
printf("%.8lf\n", sum);
printf("%.8lf\n", del);

return 0;
} 
