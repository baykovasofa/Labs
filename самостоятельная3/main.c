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
#include <limits.h>
int main(void)
{ int n, a, k, b, c;
	scanf("%d", &k);
	a=1;
	b=1;
	for ( n=1; n<=k; n++ )
		
	  { c=b;
        b=a;
		a=b+2*c;
	if (c<0)
			break;
	   printf("%3d  %d\n",n, c); }
	return 0;
}

