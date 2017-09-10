#include <stdio.h>
#include <math.h>

int binary_decimal(int n);
int main()
{
    int a, n1, n2;
    int ans;
    char c;
    scanf("%d",&a);
    while(a!=0)
    {
        ans = 0;
        scanf("%d %d",&n1 ,&n2);
        ans+= (binary_decimal(n1) + binary_decimal(n2));
        printf("%d\n",ans);
        a--;
    }
    return 0;
}
int binary_decimal(int n) /* Function to convert binary to decimal.*/

{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(2,i);
        ++i;
    }
    return decimal;
}
