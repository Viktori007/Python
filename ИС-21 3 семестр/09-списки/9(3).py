'''
27.11.22
Задание 3. Задача «Больше своих соседей».
Дан список чисел. Определите, сколько в этом списке элементов, которые больше двух своих соседей, и выведите количество таких элементов. Крайние элементы списка никогда не учитываются, поскольку у них недостаточно соседей.
'''
a=input().split()
s=0
for i in range (1, len(a)-1):
  if a[i] > a[i-1]:
      if a[i] > a[i+1]:
          s=+1
print(s)
    