'''
Егорова Виктория 21Ис-21 14.11.2022
Задание 4. 
Даны три числа. Найти сумму двух наибольших из них.
'''
a = int(input())
b = int(input())
c = int(input())
if a > b:
    if b>c:
        print(a+b)
    else:
        print(a+c)    
else:
    print(b+c)
