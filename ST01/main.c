#include<stdio.h>
#include<string.h>
int main()
{
int i;
 char a[10000];
 while(gets(a))
 {
  if(a[0]=='0') puts("¹s");
  int d=1; int length=strlen(a);
  for(i=0;i<length;i++)
  {
   int k=strlen(a)-i;

   if(a[i]=='0' && a[i+1]!='0' && i!=strlen(a)-1)
        printf("¹s");
   else if(a[i]=='1') printf("³ü");
   else if(a[i]=='2') printf("¶L");
   else if(a[i]=='3') printf("°Ñ");
   else if(a[i]=='4') printf("¸v");
   else if(a[i]=='5') printf("¥î");
   else if(a[i]=='6') printf("³°");
   else if(a[i]=='7') printf("¬m");
   else if(a[i]=='8') printf("®Ã");
   else if(a[i]=='9') printf("¨h");

   if(a[i]!='0')
   {
    if(k==5)   printf("¸U");
    if(k==9){   printf("»õ"); d=0;}
    else if(k%4==2)  printf("¬B");
    else if(k%4==3)  printf("¨Õ");
    else if(k%4==0)  printf("¥a");
   }

   if(a[i]=='0' && k==5 && d==1) printf("¸U");
   else if(a[i]=='0'&& k==9){ printf("»õ"); d=0;}
  }
  putchar('\n');
 }
 return 0;
}
