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
{ double a, b, m[41], c=0,  n=8, x;
int i,  j=0;
  for ( i=0; i<=40; i++)
	{
		x=-8+0.4*i;
	   m[i]=5*(sin(0.6*x));
     printf("x=%lf  m[%d]=%lf    \n", x, i, m[i]);
     if ( ( (i%2) != 0) && ( m[i]<c ) )
     {
        c=m[i]; 
         
     }     
      if ( m[i]<0 )
      {
        j++;
        a+=m[i];
        //b=a/j;
      }
      //printf("%lf  ", a);
      
	// printf("%lf      \n", a/j);
	 //printf("%lf\n", c );
	}
	
	 printf("%lf\n", c);
	 printf("%lf\n", a/j );
	return 0;
}

