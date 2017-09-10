#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[10000], ans[1000];
    int  i, j, k, rec;

    while(fgets(str,10000,stdin))
    {


        for(i = 0; i < strlen(str); i++)
        {

            rec = 0;
            k = 0;
            if(str[i] > 48 && str[i] < 58)
            {
                rec = atoi(&str[i]);
              while(isdigit(str[i]))i++;

                for(j = i; j < strlen(str); j++)
                {
                    if(str[j] > 47 && str[j] < 58 || str[j] == '\n')
                    {

                        i = j - 1;
                        break;
                    }
                    ans[k] = str[j];
                    k++;
                }
                ans[k] ='\0';
                for(j = 0; j < rec; j++)
                    printf("%s",ans);
            }
        }
        printf("\n");

    }
    return 0;
}
