'''
28.11.22
-If17. 
Даны три переменные вещественного типа: A, B, C. Если их значения 
упорядочены по возрастанию или убыванию, то удвоить их; в противном 
случае заменить значение каждой переменной на противоположное. 
Вывести новые значения переменных A, B, C.
'''
 a=float(input())
b=float(input())
c=float(input())
if a>b:
    if b>c:
        print(a*2,b*2,c*2)
    else:
        print(-a,-b,-c)    
elif a<b:
    if b<c:
        print(a*2,b*2,c*2)
    else:
        print(-a,-b,-c)