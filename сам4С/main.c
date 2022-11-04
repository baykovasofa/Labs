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
  int  k, m, b = 0, n = 0;
  long int sum = 0, max = INT_MAX;

  scanf("%d", &k);
  
  //printf("max = %ld\n", max);

  while ( 1 )
  {  
    n++;
    b = 3*n;
    m = b;
    for(int i = 2; i <= k; i++)     // Возведение 3*n в степень k
    {
      //printf("%d\n", b*m);
      if (b*m > 0)
        b *= m;
      else   
      { 
        simv = '*';
        //printf("br1\n");
        break;
      }
    }

    if(simv == '*')
    {
      //printf("br2\n");
      //sum += b;
      break;
    }
         
    if (sum >= max - b)
    {
      simv = '+';
      
      //printf("br3  %d\n", n);
      break;
    }

    sum += b;
    //printf("k = %d \t n = %d \t (3n)**k = %d \t sum = %ld\n", k, n, b, sum);
  }
  n--;
  printf("%ld\n", sum);
  printf("%d\n", n);  
  printf("%c\n", simv);

  return 0;
}
