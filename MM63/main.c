#include <stdio.h>
#include <stdlib.h>
int main()
{
    long  set, rec, div, a;

        div = 2;
        scanf("%ld",&set);
        while(set != 1)
        {
            rec = 0;
            if(set % div == 0)
            {
                printf("%ld",div);
                set /= div;
                rec++;
                while(set % div == 0)
                {
                    rec++;
                    set/=div;
                }
                if(rec >= 1) printf("^%ld",rec);
                if(set != 1) printf(" x ");
            }
            div++;
        }
        printf("\n");

    return 0;
}
