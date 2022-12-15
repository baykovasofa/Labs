#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i, min, max, m[40], a, summ = 0, count = 0;
  double mm, k = 0;

  /*
  // заполнение массива случайными числами

  scanf("%d", &min);
  scanf("%d", &max);

  for (i = 0; i < 40; ++i)
    m[i] = min + rand() % (max-min+1);

  //вывод элементов массива на экран

  for (i = 0; i < 40; ++i)
    printf("m[%d] = %d\n", i, m[i]);

  */
  
  for (i = 0; i < 40; ++i)
    scanf("%d", m + i);

  scanf("%d", &a);

  // число mm – среднее арифметическое всех элементов массива, 
  // индексы которых кратны целому числу a
  for (i = 0; i < 40; ++i)
    if (i % a == 0)
    {
      k++;
      summ += *(m + i);
      //printf("m[%d] = %d\n", i, *(m + i));
    }
  mm = summ / k;
  // количество элементов, значения которых меньше mm
  for (i = 0; i < 40; ++i)
    if (*(m + i) < mm)
    {
      count++;
      //printf("m[%d] = %d\n", i, *(m + i));
    }

  printf("%.4f\n", mm);
  printf("%d\n", count);

  return 0;
}
