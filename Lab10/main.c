#include <stdio.h>
#include <math.h>

int Fn(int n, int m);
int i = 0, maxrec = 20;

int main (void)
{ 
  int n, m, a;

	scanf("%d", &n);
  scanf("%d", &m);

  a = Fn(n, m);

  if (i >= maxrec)
    printf("!\n");
  else
    printf("%d\n", a);
  return 0;
}

int Fn(int n, int m)
{ 
  int pr, sum, res;
  printf("i = %d, n = %d, m = %d, res = %d\n", i, n, m, res);
  i++;
  if (i >= maxrec)
    return 0;

  pr = m * n;
  sum = m + n;
  if (pr%2 != 0) 
  { 
		if (sum < pr)
      res = sum;
		else 
			res = pr;
	} else
  {
    res = Fn(n*m/2, m) + Fn(n, n*m/2);
  }

  return res;
}
