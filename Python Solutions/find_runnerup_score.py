#todo
'''
    takes an input n 
    takes the the scores as list
    find the runner up score
'''
n = int(input())
a = map(int, input().split())
b = sorted(set(a))
print(b[-2])



