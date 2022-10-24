# todo
# if n is odd print Wired
# if n is even and between 2 and 5 print Not Weird
# if n is even and between 6 and 20 print Weird
# if n is even and greater than 20 print Not Weird

n = int(input())
b = n % 2
if b != 0: 
    print('Wired')
elif b == 0 and 2<= n <= 5: 
    print('Not Wired')
elif b == 0 and 6<= n <= 20:
    print('Wired')
elif b == 0 and n > 20:
    print('Not Wired')
