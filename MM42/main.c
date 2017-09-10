#include<stdio.h>
#include<math.h>
int main()
{
    long long  num, num2, i, j;
    long long  perfectset[7] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};

    scanf("%lld",&num);
    if(num > 5 && num < 28) printf("6 is perfect number\n");
    else if(num > 27 && num < 496)printf("6 28 is perfect number\n");
     else if(num > 495 && num < 8128)printf("6 28 496 is perfect number\n");
    else if(num > 8127 && num < 33550336)printf("6 28 496 8128 is perfect number\n");
    else if(num > 33550335 && num < 85898969057)printf("6 28 496 8128 33550336 is perfect number\n");
    else if(num > 8589869055 && num < 137438691328)printf("6 28 496 8128 33550336 8589869056 is perfect number\n");
    else if(num > 137438691327)printf("6 28 496 8128 33550336 8589869056 137438691328 is perfect number\n");
    return 0;
}
