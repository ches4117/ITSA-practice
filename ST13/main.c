#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i, j, k, m, len1, len2, num, stra[1000]= {0}, strb[1000]= {0};
    char a[1000], b[1000];

    while(scanf("%s",a)!=EOF)
    {
        len1 = strlen(a);

        for(i = 0; i < len1; i++)
            stra[tolower(a[i])]++;

        scanf("%d",&k);

        for(m = 0; m < k; m++)
        {
            num = 0;
            scanf("%s",b);

            len2 = strlen(b);

            for(i = 0; i < len2; i++)
                strb[tolower(b[i])]++;

            for(i='a'; i<='z'; i++)
                if(stra[i] != strb[i])break;

            if(i == 'z'+1) printf("%s\n",b);
            for(i = 'a'; i <= 'z'; i++)
                strb[i] = 0;

        }

    }

    return 0;
}
