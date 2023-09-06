'''
28.11.22
Задание 2. Matrix7. 
Дана матрица размера M ? N и целое число K (1 ? K ? M). 
Вывести элементы K-й строки данной матрицы.
'''
m=int(input())
n=int(input())
k=int(input())
s1=[]
ch=0
for i in range(m):
    s2=[]
    for j in range(n):
        s2.append(ch)
        ch+=1
    s1.append(s2)
print(s1[k-1])
