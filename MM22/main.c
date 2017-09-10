#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    while(scanf("%d",&a)==1)
    {
       int i;
       int flag =1;
       int array[4000]={0};
       int map[4000]={0};
       int differ;

      for(i =1;i<=a;i++)
        scanf("%d",&array[i]);

      for(i=1;i<a;i++)
      {
           differ = abs(array[i+1]-array[i]);

        if(differ >=a ||differ<1 || map[differ])
        {
            flag=0;
            printf("Not jolly\n");
            break;
        }
        else
         map[differ] =1;

      }
        if(flag)
           printf("Jolly\n");
    }


    return 0;
}
