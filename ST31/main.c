#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[1000], i, minrec;
    int  max = -1, none;
    while(scanf("%s",str)!=EOF)
    {
        int rec[100000] = {0};
        max = -1;
        for(i = 0; i < strlen(str); i++)
            rec[str[i]]++;

        for(i = 0; i < strlen(str); i++)
        {
            if(rec[str[i]] > max)
            {
                none = 0;
                minrec = str[i];
                max = rec[str[i]];
            }

            else if(rec[str[i]] == max && minrec != str[i])
                none = 1;
        }
        if(none == 0)
            printf("%c\n", minrec);
        else printf("None\n");

    }
    return 0;
}
