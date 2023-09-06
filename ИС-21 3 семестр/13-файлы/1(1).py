'''
02.12.22
+File7. 
Дан файл целых чисел, содержащий не менее четырех элементов. Вывести первый, 
второй, предпоследний и последний элементы данного файла. 
'''

'''
fname='chisla.txt'
f1=open(fname, 'w')
f1.close()
'''
fname1 = 'chisla.txt'
f1 = open(fname1, 'r')
chisla = f1.readlines()
f1.close()

s=chisla
a1=s[0]
a2=s[1]
a4=s[-2]
a3=s[-1]


outf = open('vot.txt', 'w')
outf.write(a1)
outf.write(a2)
outf.write(a4)
outf.write(a3)
outf.close()
