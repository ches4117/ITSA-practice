#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a, i, j, start;
    char num[1000000], ans[1000000]= {};
    scanf("%d",&a);
    while(a != 0)
    {
        start = -1;
        j = 0;
        scanf("%s",num);
        if(strlen(ans) != 0)
            for(i = 0; i < strlen(ans); i++)
            {

            }
        else strcat(ans, num);
        a--;
    }
    printf("%s\n",ans);
    return 0;
}
