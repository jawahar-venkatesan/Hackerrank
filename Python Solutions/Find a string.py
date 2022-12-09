def count_substring(string, sub_string):
    val =0
    str1=0
    while str1 >= 0:        
        str1 = string.find(sub_string,str1)
        if str1 != -1:
            val+=1
            str1+=1
    return val

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)