#include<stdio.h>
////////////////////////Todo////////////////////////
/*
    takes an input character as input
    takes an string as input
    takes an sentence as input
*/
int main(){
    char ch, s[100], sen[100];
    scanf("%c%s\n%[^\n]s",&ch,s,sen);
    printf("%c\n%s\n%s\n",ch,s,sen);

}