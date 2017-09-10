#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1,num2,tmp;
    int counter,carry;

    while(scanf("%d %d",&num1,&num2)!=EOF){
        if(num1==0&&num2==0) break;

        counter=0; carry=0;
        while(num1!=0||num2!=0){
            if( ( (num1%10) + (num2%10) + carry ) > 9 ){
                ++counter;
                carry=( (num1%10) + (num2%10) + carry ) / 10;
            }else
                carry=0;

            num1/=10; num2/=10;
        }

        if(counter==0)
            printf("No carry operation.\n");
        else if(counter==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",counter);
    }


    return 0;
}
