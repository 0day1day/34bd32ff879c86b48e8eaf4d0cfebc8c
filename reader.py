import csv

reader2 = csv.reader(open('boot2.csv', 'r'))
reader3 = csv.reader(open('boot3.csv', 'r'))
reader4 = csv.reader(open('boot4.csv', 'r'))

rows2 = []
rows3 = []
rows4 = []

for i in reader2:
    rows2.append(i)

for j in reader3:
    rows3.append(j)

for k in reader4:
    rows4.append(k)

print "Total events in boot2.csv - ", len(rows2)
print "Total events in boot3.csv - ", len(rows3)
print "Total events in boot4.csv - ", len(rows4)

x = 0
for (i,j) in zip(rows2, rows3):
    if i == j:
        x += 1

y = 0
for (i,j) in zip(rows2, rows4):
    if i==j:
        y += 1

print "Similar events between two non infected- ", x
print "Similar events between an infected and non infected - ", y
