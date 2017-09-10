#include <stdio.h>
#include <string.h>
int main()
{
    int i, num, ans, a, b;
    scanf("%d",&a);
    while(a != 0)
    {
        ans = 1;
        scanf("%d",&b);
        for(i = 1; i <= b; i++)
            ans *= i;
        printf("%d\n",ans);
        a--;
    }
    return 0;
}
