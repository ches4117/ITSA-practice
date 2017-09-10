#include<stdio.h>
int main(){
  int tmp, n1, n2;

  while(scanf("%d %d",&n1 ,&n2) != EOF)
  {
    if(n1 < n2)
    {
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    printf("%d\n",n1 - n2);

  }
  return 0;
}
