#include <stdio.h>
int main()
{
    int t,i=0,n,h,l,j,counter,dont,strCounter;
    char str[16];
    scanf("%d", &t);
    for(l = 0 ; l < t ; l++)
    {
        scanf("%d %d",&n,&h);
        for(i = 0;i<1<<n;i++)
        {
            counter = 0;
            dont = 0;
            strCounter = 0;
            strcpy(str,"");
            for(j = n-1;j>-1;j--)
            {
                 if(((1<<j)&i)!=0)
                 {
                     if(counter > h-1)
                     {
                         dont = 1;
                         break;
                     }
                     str[strCounter] = '1';
                     counter++;
                     strCounter++;
                 }
                 else
                 {
                     str[strCounter] = '0';
                     strCounter++;
                 }
            }
            if(dont == 0 && counter == h)
            {
                for(j=0 ; j < strCounter ; j++)
                {
                    printf("%c", str[j]);
                }
                printf("\n");
            }
        }if(l < t -1)
        printf("\n");
    }
    return 0;
}
