'''
28.11.22
If20. 
На числовой оси расположены три точки: A, B, C. Определить, 
какая из двух последних точек (B или C) расположена ближе к A, 
и вывести эту точку и ее расстояние от точки A. 
'''
a=float(input())
b=float(input())
c=float(input())
if abs(a-b)>abs(a-c):
    print("c=",c,"; расстояние=",abs(a-c))
elif abs(a-b)==abs(a-c): 
    print('b=',b,"c=",c,"; расстояние=",abs(a-b))
else:
    print("b=",b,"; расстояние=",abs(a-b))
    