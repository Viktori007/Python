'''
28.11.22
Задание 1. Matrix1. 
Даны целые положительные числа M и N. Сформировать целочисленную матрицу размера 
M ? N, у которой все элементы I-й строки имеют значение 10·I (I = 1, …, M).
'''
n=int(input())
m=int(input())
for i in range(n):#строки
    for j in range(m):#столбцы
        print(10*i, end=" ")
    print()  
