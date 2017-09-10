#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[10][10];
    int i, j, recx = 0, recy = 0;

    scanf("%d%d%d",&n[0][0] ,&n[0][1], &n[0][2]);
    scanf("%d%d%d",&n[1][0] ,&n[1][1], &n[1][2]);
    scanf("%d%d%d",&n[2][0] ,&n[2][1], &n[2][2]);

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(n[i][j] == 1) printf("Y");
            else if(n[i][j] == 0) printf("*");
            else printf("X");
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++)
    {
        if(n[i][0] == n[i][1] && n[i][0] == n[i][2] && n[i][0] != 0)
        {
            if(n[i][0] == 1) recy++;
            else if(n[i][0] == 2) recx++;

        }
    }

    for(i = 0; i < 3; i++)
    {
        if(n[0][i] == n[1][i] && n[0][i] == n[2][i] && n[0][i] != 0)
        {
            if(n[0][i] == 1) recy++;
            else if(n[0][i] == 2) recx++;
        }
    }

    if(n[0][0] == n[1][1] && n[0][0] == n[2][2] && n[0][0] != 0)
    {
            if(n[0][0] == 1) recy++;
            else if(n[0][0] == 2) recx++;

    }
    else if(n[0][2] == n[1][1] && n[0][2] == n[2][0] && n[0][2] != 0)
    {
            if(n[0][2] == 1) recy++;
            else if(n[0][2] == 2) recx++;
    }
    if(recx > recy)
        printf("X bingle\n");
    else if(recx < recy)
        printf("Y bingle\n");
    else printf("Tie\n");

    return 0;

}
