#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    int i, min, max, r;
    scanf("%d",&num1);
    while(num1 != 0)
    {
        min = 9999;
        max = -1;

        scanf("%d",&num2);
        while(num2 !=0)
        {
            scanf("%d",&num3);
            if(num3 < min) min = num3;
            if(num3 > max) max = num3;
            num2--;
        }

        while(max!=0)
        {
            r=min%max;
            min=max;
            max=r;
        }

        printf("%d\n",min);
        num1--;
    }
    return 0;
}
