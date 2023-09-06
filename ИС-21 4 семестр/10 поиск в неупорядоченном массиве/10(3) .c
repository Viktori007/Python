/*Задание 3. Array19. Дан целочисленный массив A размера 10. Вывести порядковый 
номер последнего из тех его элементов AK, которые удовлетворяют двойному неравенству 
A1 < AK < A10. Если таких элементов нет, то вывести 0. 
http://ptaskbook.com/ru/tasks/array.php
Egorova Vika 21IS*/

#include <stdio.h>
int main()
{
    int a[10];
  int  k=0;
  while(k<10) {scanf("%d",&a[k]); k++; 
  }
  k=9;
  while(k>0) {
  if (a[k]<a[9] && a[k]>a[0]) {printf("%d",k);break;} k--; }
  if (k==0) printf("0");
    return 0;
}
