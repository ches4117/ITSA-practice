#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100][2];
    int i = 0, num_rec, ans = 0;
    while(scanf("%d %d",&num[i][0] ,&num[i][1]) !=EOF)
        i++;

    num_rec = i;
    for(i = 0; i < num_rec; i++)
        ans += (num[i][0] * num[i][1]);

    printf("%d\n",ans);
    return 0;
}
