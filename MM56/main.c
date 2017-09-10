#include <stdio.h>
#include <stdlib.h>

int main()
{
    int complaint = 0, num[100], i, ans, j;
    for(i = 0; i < 5; i++)
        scanf("%d,", &num[i]);
    scanf("%d",&num[5]);
    ans = 0;
    for(i = 0; i < 5; i++)
    {
        complaint=0;
        for(j = 0; j < 5; j++)
        {
            if(num[j] + num[j+1] == 6 - i)
            {
                printf("The best combination is %d, %d, Complaint=%d\n",num[j] ,num[j+1] ,complaint);
                ans = 1;
                break;
            }
            else complaint++;
        }
        if(ans == 1) break;
    }

    return 0;
}
