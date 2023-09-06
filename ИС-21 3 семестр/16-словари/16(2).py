'''
09.12.22
Задание 2. Задача «Самое частое слово»
Дан текст: в первой строке задано число строк, далее идут сами строки. 
Выведите слово, которое в этом тексте встречается чаще всего. Если таких слов 
несколько, выведите то, которое меньше в лексикографическом порядке.
'''
d = {}
max=0
for i in range(int(input())):
    for s in input().split():
        if s in d:
            d[s] += 1
        else:
            d[s] = 1     
        if d[s]> max:
            max=d[s]
def gett(d1, value):
    for k, v in sorted(d.items()):
        if v == value:
            return k
print(gett(d, max))            
#проверка на pythontutor прошла успешно