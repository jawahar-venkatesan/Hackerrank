#include<stdio.h>
int main()
{
    int n,end_val,x ,y;
    //Initialising the input cuz i'm lazy

    n = 3;
    end_val = (n*2)-1;


    for(int i = 1; i <= end_val;i++){

        for(int j = 1;j <= end_val;j++){

            if(i ==1 || j==1 || i == end_val || j==end_val){
                printf("%d ",n);
            }else if(i ==2 || j==2 || i == end_val-1 || j==end_val-1){
                printf("%d ",n-1);
            }else{
                printf("%d ",1);
            }

        }
        printf("\n");
    }
    
}