#include<stdio.h>
#include<math.h>
int main()
{
    long long  num, num2, i, j;
    long long  perfectset[7] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};

    scanf("%lld",&num);
    for(i = 0; i < 7; i++)
    {
        if(perfectset[i] < num) printf("%d\n",perfectset[i]);
        else break;
    }
    return 0;
}
