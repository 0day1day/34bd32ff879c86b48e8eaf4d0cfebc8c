import csv

reader2 = csv.reader(open('boot2.csv', 'r'))
reader4 = csv.reader(open('boot4.csv', 'r'))

rows2 = []
rows4 = []

for i in reader2:
    rows2.append(i)

for k in reader4:
    rows4.append(k)

print "Total events in boot2.csv - ", len(rows2)
print "Total events in boot4.csv - ", len(rows4)

print "creating dictionary based on boot2.csv ... "

d = {}
for i in rows2:
    d[(i[1], i[3], i[4])] = 1

for i in rows4:
    if (i[1], i[3], i[4]) not in d:
        print i

print "Cheers!"
