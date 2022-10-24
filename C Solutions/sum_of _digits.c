#include<stdio.h>
/*
    takes a number with five digit and
    prints sum of digit
*/
int main(){
    int n, sum = 0, last;
    scanf("%d",&n);
    while(n !=0 ){
        last  =  n%10;//gives the last number
        sum = last + sum;
        n/=10;
    }
    printf("%d\n",sum);//prints the sum

}