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
#include<stdio.h>
int main(void)
{
    int a, b, d, k, n, i;

	for ( a=400; a<=430; a++ )
       {
		printf("\n%d  ", a);  					  //????? ????? ?? 400 ?? 430
		k=0;                   		             // ??????????? ?????????, ??????? ???? ? ????? a
		n=0;
		for (b=2; b<=(a/2); b++)				//?????????? ?????????
      {
	   if(a%b==0)							   //??????? ?? ??????? a ?? b

           {
			k++;							  //???????? ???????? ?? 1, ????? ?????????? ??????? ?????
			if ( k>=1  && ( (k+3)%4!=0 ) )  // ?????????? ??????? ? ?????? ??????
           {
		     printf(","); }
                           
			printf("%3d", b);				//????? ????????
		if(k%4==0)

		   printf(",\n     ");
}
}
    
   

/*
             if (k%4!=0) 
			for (i=(k%4); 4; i++) 
				printf("   ");*/


       /*  if(k==0 )                 //????? ??????????? ?????????
		   printf("%22d", k);
         else if( (k+2)%4==0)
              printf("%15d", k );				  
		 else if ( (k+3)%4==0)
              printf("%19d", k); 
		 else if (k%4==0)
			   printf("%5d", k);


		// ?????? ?????? ?? ?????????? 22 ???????? ?? ?*/
		
}
	printf("\n");

    return 0;













}

