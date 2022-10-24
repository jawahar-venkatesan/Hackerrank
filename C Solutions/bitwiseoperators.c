#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k)
{

    int  i, j, and = 0, or = 0, exor = 0;
    for(i = 1; i <= n ; i++){
        for(j = i+1;j <= n;j++)
        {
            if((i&j) < k && (i&j) > and)
            {
                and = i&j;
            }
            if((i|j) < k && (i|j) > or)
            {
                or = i|j;
            }
            if((i^j) < k && (i^j) > exor)
            {
                exor = i^j;
            }    
        }
    }
    printf("%d\n%d\n%d\n",and,or,exor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}