'''
23.11.22
лаб.раб. 8 (for)
Егорова Виктория 21ИС
Задание 3. 
Задача «Количество нулей». Дано N чисел: сначала вводится число N, затем вводится ровно N целых чисел. Подсчитайте количество нулей среди введенных чисел и выведите это количество.
'''
n=int(input())
k=0
for i in range (1,n+1,1):
    a=int(input())
    if a==0:
        k+=1
print(k)        
        
