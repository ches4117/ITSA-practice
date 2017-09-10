#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, num[100], i = 0, max = 0, max_ptr, rec, occur[100] = {0};

    while( scanf("%d",&num[i]) !=EOF)
        i++;
    rec = i;
    for(i = 0; i < rec; i++)
    {
        occur[ num[i] ]++;
        if( occur[num[i]] > max)
        {
            max_ptr = num[i];
            max = occur[num[i]];
        }
    }
    if(occur[max_ptr] < (rec/2)) printf("No Majority\n");
    else printf("Majority is %d\n",max_ptr);

    return 0;
}
