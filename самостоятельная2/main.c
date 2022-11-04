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

#include <stdio.h>

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
    int a, b, c, x, y;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d", &x, &y);
    
    if ( ( a>=b && b>c ) || ( b>=a && a>c ) )       /* число с наименьшее из всех*/
            printf("%d\n", c);
    else if ( ( a>=c && c>b ) || ( c>=a && a>b ) )  /* число b наименьшее из всех */
            printf("%d\n", b); 
    else if ( ( b>=c && c>a ) || ( c>=b && b>a ) )  /* число a наименьшее из всех */
            printf("%d\n", a);
 
    /* два равных числа меньше третьего*/
    
    if (a>b && b==c)                          
            printf("%d two\n", b);
    else if (b>a && a==c)
            printf("%d two\n", a);
    else if ( c>a && a==b)
            printf("%d two\n", a);
    
    /* все числа равны*/
    if ( a==b && b==c)
       printf("equal\n");
    
    /*нахождение точек пронадлежащих заданной области*/   
	
   if (  ( x>-400 && x<400 ) && ( y>-400 && y<400 ) && ( x*x + y*y < 160000 ) )  /* для окружности*/

		{  if (y < -200)                                                         /* при y меньше -200 и для любого х*/
                   printf("inside\n");

           else if ( y<0 && ( x>200 || x<-200) )                                 /* для y от 0 до -200*/                      
			       printf("inside\n");

           else if (y == 0)                                                      /* для y = 0 ни одна точка не входит в промежуток*/
			       printf("outside\n");

           else if ( y>0 && ( y<sqrt(160000-x*x) ) && ( y>x+400 ) )              /* для y > 0 и наклонных прямых*/
			       printf("inside\n");

		   else if ( y>0 && ( y<sqrt(160000-x*x) ) && ( y>x*(-1)+400 ) )
			       printf("inside\n");
                else
                    printf("outside\n");
        }
	
	else 
		           printf("outside\n");
 
  
  return 0;
}

  
  
  
        
    
    
    
    
  

