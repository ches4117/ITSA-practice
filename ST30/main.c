#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[1000000], ans[100];
    int  i, j;

    while(fgets(str, 100, stdin))
    {
        for(i = 0; i < 100; i++) ans[i] = '\0';
        j = 0;
        for(i = 0; i < strlen(str); i++)
        {
            if(isdigit(str[i]))
            {
                ans[j++]=str[i];

            }
        }
        if(j == 0) {printf("-1\n"); continue;}

        printf("%u\n",atoi(ans));
    }
    return 0;
}
