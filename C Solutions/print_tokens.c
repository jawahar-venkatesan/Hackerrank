#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    int i;
    for(i = 0; i<strlen(s); i++)
    {
        if(s[i]!=(int)32)
        {
            printf("%c",s[i]);
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}