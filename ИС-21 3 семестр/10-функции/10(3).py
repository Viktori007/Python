'''
27.11.22
Задание 3. Func6. 
Описать функцию SumRange(A, B) целого типа, находящую сумму всех целых чисел от A до B включительно (A и B — целые). Если A > B, то функция возвращает 0. С помощью этой функции найти суммы чисел от A до B и от B до C, если даны числа A, B, C.
'''
def SumRange(a, b):
  s=0
  if a>b:
    return 0
  else:
    for i in range(a, b+1):
        s+=i
    return s
a, b, c=[int(i) for i in input().split()]
print(SumRange(a, b), SumRange(b, c))