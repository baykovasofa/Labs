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
	double m[41], sum = 0, min = 10.0;
  int i = 0, count = 0;
	for ( double x = -8.0; x <= 8.00001; x += 0.4 )
  {   
    m[i] = 5*sin(0.6 * x);
    sum += m[i];
    if ( m[i] < 0 )
    {
      count++;
      sum += m[i];
    }
    if ( (m[i] < min) && (i % 2 != 0) )
      min = m[i];
    printf("x=%lf  m[%d]=%lf\n", x, i, m[i]);
    i++;
  }
  
  printf("%lf\n", min);
  printf("%lf\n", sum/count);

  return 0;
}
    
