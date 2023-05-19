#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
   
    scanf("%d", &n);
  	
    for(int a=2*n-1; a>0; a--)
    {
        for(int i=2*n-1; i>0;i--)
        {
            if(abs(n-a)>abs(n-i))
            {
                printf("%d ", abs(n-a)+1);
            }
            else
            {
                printf("%d ", abs(n-i)+1);
            }
        }
        printf("\n");
    }
    return 0;
    
}