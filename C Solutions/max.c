#include<stdio.h>
int max_of_four( int a, int b, int c, int d){
    if (a > b && a > c ){
        if (a > d){
            return a;
        }
        else{
            return d;
        }
    }
    if (b > c && b > d){
        if (b > a){
            return b;
        }
        else{
            return a;
        }
    }
    if (c > a && c > b){
        if ( c > d){
            return c;
        }
        else {
            return d;
        }
    }

}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
