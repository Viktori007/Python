'''
27.11.22
Задание 4. Func9. 
Описать функцию Even(K) логического типа, возвращающую True, если целый параметр K является четным, и False в противном случае. С ее помощью найти количество четных чисел в наборе из 10 целых чисел. 
'''
def Even(k):
    if k%2==0:
      return True
    else:
      return False
s=0
for i in range(10):
    k=int(input())
    if Even(k)==True:
      s+=1
print(s)