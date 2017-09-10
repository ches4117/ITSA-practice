#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a , const void* b){
    return *(int *)a - *(int *)b;
}

int main(void){
    int amount,i;
    int relatives,streets[510],sum,median;

    scanf("%d",&amount);
    while(amount--){
        scanf("%d",&relatives);
        for(i=0;i<relatives;i++){
            scanf("%d",&streets[i]);
        }

        qsort(streets,relatives,sizeof(int),compare);

        median=streets[relatives/2];

        sum=0;
        for(i=0;i<relatives;i++){
            sum+=abs(streets[i]-median);
        }

        printf("%d\n",sum);
    }



    return 0;
}
