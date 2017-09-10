#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len[3], i, max = -1, max_ptr;
    scanf("%d %d %d",&len[0] ,&len[1] ,&len[2]);
    for(i = 0; i < 3; i++)
        if(len[i] > max) {max_ptr = i; max = len[i];}

    len[max_ptr] = 0;
    if(len[0] + len[1] + len[2] <= max) printf("invalid\n");
    else if(len[0]*len[0] + len[1]*len[1] + len[2]*len[2] < max * max) printf("obtuse\n");
    else if(len[0]*len[0] + len[1]*len[1] + len[2]*len[2] > max * max) printf("acute\n");
    else if(len[0]*len[0] + len[1]*len[1] + len[2]*len[2] == max * max) printf("right\n");

    return 0;
}
