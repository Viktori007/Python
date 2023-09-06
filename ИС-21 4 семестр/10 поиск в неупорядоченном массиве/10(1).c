/*Задание 1. Дан массив целых чисел A и целое число X. 
Найти индекс первого вхождения числа X в массив A. В случае отсутствия - отпечатать -1.
Egorova Vika 21IS*/

#include <stdio.h>
int main()
{
  int a[100];
  int x,n, i=0;
  scanf("%d",&x);
  scanf("%d",&n);
  while(i<n) {scanf("%d",&a[i]); i++; 
  }
  i=0;
  while(i<n) {
  if (a[i]==x) {printf("%d",i);break;} else a[i]=0; i++; }
  if (a[i-1]==0) printf("-1");
    return 0;
}