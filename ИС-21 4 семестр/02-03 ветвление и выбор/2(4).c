/*Задание 4. Написать программу, которая анализирует данные о возрасте и относит человека к 
одной из четырех групп: дошкольник, школьник, рабочий, пенсионер.
дошкольник <= 6
7 <= школьник <= 18
19 <= рабочий <= 59
пенсионер >= 60
Входные данные: Одно целое число - возраст человека.
Выходные данные: Одно слово. Название категории, к которой относится человек. 
Егорова Виктория 21ис*/

#include <stdio.h>

int main() {
    int v;
    scanf("%d", &v);
     if (v<=6 && v>=0) printf("дошкольник");
     if (v<=18 && v>=7) printf("школьник");
     if (v<=59 && v>=19) printf("рабочий");
     if (v>=60) printf("пенсионер");
  return 0;
}

//проверено на степике