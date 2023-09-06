/* 2. Напишите программу, которая выводит размеры типов int, float, char, bool и size_t в битах.
 Каждое значение должно быть в отдельной строке в указанном порядке. Для вывода используйте cout,
 заголовок уже подключен.
Егорова Виктория*/


#include <stdio.h>
int main(){
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(char));
    //printf("%lu\n", sizeof(bool));
    printf("%lu\n", sizeof(size_t));
    return 0;
}