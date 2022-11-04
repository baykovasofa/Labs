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
{ 
char simv;    
int  k, a, b, c ,m;
long int sum;
	scanf("%d", &k);
           b=0;
           sum=0;
	       c=0;
 while ( sum < INT_MAX )
	{  
      ++c;
      b=3*c;
        m=b;
        for(a=2; a<=k; a++)        //возведение тройки в степень k
		{	
			if (b*m > 0)
				b*=m;
			else 	
		    	{ 
			       simv='*';
			       break;
			    }
		}
			 if(simv=='*')
             { 
              
			   break;
		     }
			
	   if (sum >= INT_MAX-b )
	   {
			simv='+';
			
            break;
	   }

	  sum+=b;
  
 }
	
printf("%ld\n", sum);
if (sum==0) 
		printf("%d\n", 1);
	else
printf("%d\n", c-1);	
printf("%c\n", simv);

    return 0;

}
