#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    n = 4;
    //scanf("%d", &n);
  	// Complete the code to print the pattern.
    for(int k=2*n-1; k>0; k--)
    {
        for(int i=2*n-1; i>0;i--)
        {
            if(abs(n-k)>abs(n-i))
            {
                printf("%d ", abs(n-k)+1);
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