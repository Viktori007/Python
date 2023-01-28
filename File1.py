''' Text1. Дано имя файла и целые положительные числа N и K. Создать текстовый файл с
указанным именем и записать в него N строк, каждая из которых состоит из K
символов «*» (звездочка). '''

name = input()
n = int(input())
k = int(input())
f = open(name, 'w')
for i in range(n):
    for j in range(k):
        f.write('*')
    f.write('\n')
f.close()

f = open(name, 'r')
for line in f:
    # print(line, end='')
    print(line.rstrip())
f.close()
