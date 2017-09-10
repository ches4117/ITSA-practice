#include <stdio.h>
int main()
{
    int q1, p1, q2, p2, len1, len2;
    int Q1, Q2, num;
    scanf("%d",&num);
    while(num!=0)
    {
        scanf("%d%d%d%d",&q1 ,&p1 ,&q2 ,&p2);
        Q1 = q1;
        Q2 = q2;

        len1 = 0;
        len2 = 0;
               do
        {
            q1*=10;
            q1%=p1;
            ++len1;
        }
        while(q1!=Q1);
                       do
        {
            q2*=10;
            q2%=p2;
            ++len2;
        }
        while(q2!=Q2);
        if(len1 > len2) printf("A\n");
        else if(len1 < len2) printf("B\n");
        else printf("T\n");

        num--;
    }
    return 0;
}
