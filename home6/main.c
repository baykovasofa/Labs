#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	double a = 1.0, b, c = 3.0, y = 5.0, sa, sb, x0, e = 1, err = 1e-7, summ;
	b = (c + a) / 2.0;

	while(fabs(e) > err)
	{
		printf("a=%.7lf b=%.7lf c=%.7lf ", a, b, c);

		sa = sinh(a);
		sb = sinh(b);

		if ( (sa > y) & (sb < y ) || (sa < y) & (sb > y) )
			c = b;
		else
			a = b;

		b = (c + a) / 2.0;

		e = x0 - b;

		x0 = b;
		printf("x0=%.7lf e=%.7lf\n", x0, e);

	}

	


	printf("%.7lf\n", x0);
	printf("%.6lf\n", err);
	return 0;
}
