#include <stdio.h>
#include <stdlib.h>
int main()
{
    int set, rec, div, a;

    scanf("%d",&a);
    while(a != 0)
    {
        div = 2;
        scanf("%d",&set);
        while(set != 1)
        {
            rec = 0;
            if(set % div == 0)
            {
                printf("%d",div);
                set /= div;
                rec++;
                while(set % div == 0)
                {
                    rec++;
                    set/=div;
                }
                if(rec > 1) printf("^%d",rec);
                if(set != 1) printf("*");
            }
            div++;
        }
        printf("\n");
        a--;
    }
    return 0;
}
