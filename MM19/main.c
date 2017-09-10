#include<stdio.h>
#include<string.h>
int main()
{
    char num1[2], num2[100], ans;
    int i, j;
    while(scanf("%s%s",num1 ,num2) != EOF)
    {
        ans = 0;
        for(i = 0; i < strlen(num2); i++)
            if(num1[0] == num2[i] && num1[1] == num2[i+1])
                ans++;

        printf("%d\n",ans);
    }
    return 0;
}
