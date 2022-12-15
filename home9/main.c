#include <stdio.h>
#include <math.h>

int summ(int x1, int x2, int *y);
int sub(int x1, int x2, int *y);
int mul(int x1, int x2, int *y);
int stepen(int x, unsigned int n, int *y);
int div(int x1, int x2, int *y);
int mod(int x1, int x2, int *y);



int main(void)
{
	int a, b, result, error;

	scanf("%d", &a);
	scanf("%d", &b);

	//summ(a, b, &y);
	//sub(a, b, &y);
	//mul(a, b, &y);
	//stepen(a, b, &y);
	//div(a, b, &y);
	error = mod(a, b, &result);


	//if (mul(a, b, &y))

	if (error == 0)
		printf("%d\n", result);
	else
		printf("!%d\n", error);

	return 0;
}



int summ(int x1, int x2, int *y)
{
	int err = 0;


	*y = x1 + x2;

	//if ()
	//	err = 1;

	return err;
}

int sub(int x1, int x2, int *y)
{
	int err = 0;


	*y = x1 - x2;	

	//if ()
	//	err = 2;

	return err;
}

int mul(int x1, int x2, int *y)
{
	int err = 0;


	*y = x1 * x2;

	//if ()
	//	err = 3;

	return err;
}

int stepen(int x, unsigned int n, int *y)
{
	int err = 0;


	*y = pow(x, n);

	//if ()
	//	err = 4;

	return err;
}

int div(int x1, int x2, int *y)
{
	int err = 0;


	*y = x1 / x2;

	//if ()
	//	err = 5;

	return err;
}

int mod(int x1, int x2, int *y)
{
	int err = 0;


	*y = x1 % x2;

	if (1)
		err = 6;

	return err;
}
