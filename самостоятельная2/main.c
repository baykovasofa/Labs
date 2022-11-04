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
    
    if ( ( a>=b && b>c ) || ( b>=a && a>c ) )       /* ����� � ���������� �� ����*/
            printf("%d\n", c);
    else if ( ( a>=c && c>b ) || ( c>=a && a>b ) )  /* ����� b ���������� �� ���� */
            printf("%d\n", b); 
    else if ( ( b>=c && c>a ) || ( c>=b && b>a ) )  /* ����� a ���������� �� ���� */
            printf("%d\n", a);
 
    /* ��� ������ ����� ������ ��������*/
    
    if (a>b && b==c)                          
            printf("%d two\n", b);
    else if (b>a && a==c)
            printf("%d two\n", a);
    else if ( c>a && a==b)
            printf("%d two\n", a);
    
    /* ��� ����� �����*/
    if ( a==b && b==c)
       printf("equal\n");
    
    /*���������� ����� ������������� �������� �������*/   
	
   if (  ( x>-400 && x<400 ) && ( y>-400 && y<400 ) && ( x*x + y*y < 160000 ) )  /* ��� ����������*/

		{  if (y < -200)                                                         /* ��� y ������ -200 � ��� ������ �*/
                   printf("inside\n");

           else if ( y<0 && ( x>200 || x<-200) )                                 /* ��� y �� 0 �� -200*/                      
			       printf("inside\n");

           else if (y == 0)                                                      /* ��� y = 0 �� ���� ����� �� ������ � ����������*/
			       printf("outside\n");

           else if ( y>0 && ( y<sqrt(160000-x*x) ) && ( y>x+400 ) )              /* ��� y > 0 � ��������� ������*/
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

  
  
  
        
    
    
    
    
  

