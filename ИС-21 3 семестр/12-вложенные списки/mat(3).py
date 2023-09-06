'''
28.11.22
Задание 3. Matrix17. 
Дана матрица размера M ? N и целое число K (1 ? K ? M). 
Найти сумму и произведение элементов K-й строки данной матрицы.
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
d=str(s1[k-1])
d_pr=d[1:-1:3]
t,s,p=0,0,1
while t< len(d_pr):
    v=d_pr[t]
    s+=int(v)
    p*=int(v)
    t+=1
print(f'матрица {s1},\nстрока {d},\nсумма= {s},\nпроизведение= {p} ')  

