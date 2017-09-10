#include<stdio.h>
#include<stdlib.h>

int cmp( const void *a, const void *b) {
    return *((int*) a) - *((int*) b) ;
}

int main( )
{
    int i,j,n;
    float median;
    int a[1000], median2;

    i = 0;
    while(scanf("%d", &a[i])!=EOF)
        i++;
    n = i;

    qsort(a, n, sizeof(int), cmp);

    if ( n % 2 == 0)
        median = (a[n/2 - 1] + a[n/2])/2.0 ;
    else
        median = a[n/2];

    median2 = median;
    if(median - median2 > 0) printf("Median=%.1f\n", median);
    else printf("Median=%d\n", median2);

}
