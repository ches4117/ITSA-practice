#include <stdio.h>
#include <string.h>

int main()
{
    int len, ans, digit, denum;
    char num[100], i, j;
    while(scanf("%s",num)!=EOF)
    {
        ans = 0;
        len = strlen(num);
        for(i = 0; i < len; i++)
        {
            digit = len - i - 1;
            denum = num[i] - 'A' + 1;

            for(j = 0; j < digit; j++)
                denum *= 26;

            ans += denum;
        }
        printf("%d\n",ans);
    }
    return 0;
}

