#todo
'''
    make a nested list and then find the runnerup score
'''
n = int(input("Enter the number of students to be added: "))#takes input
rec = []
sco = []
for _ in range(n):
    name = input()#takes name as input
    score = float(input())#takes score as input
    rec.append([name,score])
    sco.extend([score])
a = sorted(set(sco))
print(rec)

for b,c in sorted(rec):
    if a[1] == c:
        print(b)

