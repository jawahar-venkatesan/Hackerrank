#include<stdio.h>
int main()
{
    int n,end_val;
    //temp
    n = 4;
    end_val = (n*2)-1;
    for(int i=1;i<=n;i++){
        int tmpval = n;
        for(int j = 1;j<=i;j++){
            printf("%d ",tmpval);
            tmpval-=1;
        }printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j = n;j>i;j--){
            printf("%d ",j);
        }printf("\n");
    }//incomplete 
    
}