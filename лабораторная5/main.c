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
int N, n;
double sum, a, S = 0.0,  cor = 0.0, Scor = 0.0, fcor, f, i;
for (N=20000000; N<=200000000; N+=20000000)
	{
		for(n=0; n<=N; n++)
		 {
        f=sqrt( (2+3*n)/(4+n) );
        fcor = f - cor;
        Scor = S + fcor;
        cor = (Scor - S) - fcor;
        S = Scor;
		  sum+=f;
		  a=sum-Scor;
         }

		printf("%9d%18.4lf%18.4lf%10.4lf\n",n-1, sum, Scor, a);
       
      
    }
   return(0) ;
}
