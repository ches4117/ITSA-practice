#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    float ans;
    while(scanf("%d",&num)!=EOF)
    {
        ans = num * 1.6;
        printf("%.1f\n",ans);
    }
    return 0;
}
