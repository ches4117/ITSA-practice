#include<stdio.h>
#include<math.h>
int main()
{
    long long  num, num2, i, j;
    long long  perfectset[7] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};

    scanf("%lld",&num);
    while(num != 0)
    {
        j = 0;
        scanf("%lld",&num2);
        for(i = 0; i < 7; i++)
            if(num2 == perfectset[i]) {printf("perfect\n"); j = 1; break;}

        if(j == 0) printf("nonperfect\n");
        num--;
    }

    return 0;
}
