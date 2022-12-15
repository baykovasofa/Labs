#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double stepen(double a, int i);
long int faktorial(int i);

int main(void)
{
	double a = 1.0, b, c = 3.0, y = 5.0, sa, sb, x0, e1 = 1.0, err1 = 1e-7;
	double e2 = 1.0, err2 = 1e-6, s, summ;
	int n = 1;



	// Часть 1
	b = (c + a) / 2.0;
	x0 = a;

	while(fabs(e1) > err1)
	{
		//printf("a=%.7lf b=%.7lf c=%.7lf ", a, b, c);

		sa = sinh(a);
		sb = sinh(b);

		if ( (sa > y) & (sb < y ) || (sa < y) & (sb > y) )
			c = b;
		else
			a = b;

		b = (c + a) / 2.0;

		e1 = x0 - b;

		x0 = b;
		//printf("x0=%.7lf e1=%.7lf\n", x0, e1);

	}

	// Часть 2
	summ = x0;

	while(e2 > err2)
	{
		s = summ + stepen(x0, 2*n+1) / faktorial(2*n+1);

		e2 = s - summ;

		summ = s;

		//printf("2*n+1=%d summ=%.6lf e2=%.6lf\n", 2*n+1, summ, e2);
		n++;
	}


	printf("%.7lf\n", x0);
	printf("%.6lf\n", summ);

	return 0;
}


double stepen(double a, int i)
{
	double y = 1;
	for (int k = 1; k <= i; k++)
		y *= a;
	return y;
}

long int faktorial(int i)
{
	long int y = 1;
	for (int k = 1; k <= i; k++)
		y *= k;
	return y;
}

