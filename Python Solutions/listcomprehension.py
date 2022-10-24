#todo
'''
    takes 3 integer values representing dimesions of the cuboid
    takes  one interger value n 
    print all combinations of three integers whose sum is not equal to  n
'''

x = int(input())
y = int(input())
z = int(input())
n = int(input())
a = [[i,j,k]for i in range(x+1) for j in range (y+1) for k in range(z+1) if (i+j+k != n)]
print(a)