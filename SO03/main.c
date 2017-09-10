#include <stdio.h>
#include <stdlib.h>
int cmp(const void *arg1, const void *arg2)
{
    return  (*(int *)arg1 - *(int *)arg2);
}

int main()
{
    int num, i, j, rec;
    int a[10000], b[10000],  max;
    while(1)
    {
        max = 0;
        rec = 0;
        scanf("%d",&num);
        if(num == 0) break;
        for(i = 0; i < num; i++)
            scanf("%d",&a[i]);
        for(i = 0; i < num; i++)
            scanf("%d",&b[i]);
        qsort(a, num, sizeof(int), cmp);
        qsort(b, num, sizeof(int), cmp);
        for(i = 0; i < num; i++)
        {
            for(j = rec; j < num; j++)
                if(b[j] > a[i]) {max++; rec = j + 1; break;}
        }

        printf("%d\n",max);

    }
    return 0;
}
