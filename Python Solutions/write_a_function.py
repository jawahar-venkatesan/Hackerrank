#todo
'''
    takes a input year
    if it evenly divided by 4 then return True
    if it evenly divided by 100 and 400 return True
    if it evenly divided only by 100 return False

'''
def is_leap(year):
    leap = False
    
    # Write your logic here
    if year%4 == 0 and year%100 != 0:
        leap = True
    elif year%100 == 0 and year%400 == 0:
        leap = False
    elif year % 400 == 0:
        leap = True
    else:
        leap = False   
    return leap
while True:
    year = int(input())
    print(is_leap(year))